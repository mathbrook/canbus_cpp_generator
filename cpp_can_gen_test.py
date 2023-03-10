from code_generation import code_generator
from code_generation import cpp_generator
from dbc_parse_funcs import *

##  this is dogshit
def signal_type_from_length(signal_length, signal_signage):
    match signal_length:
        case 1:
            return "bool"
        case 2:
            return "uint8_t"
        case 3:
            return "uint8_t"
        case 4:
            return "uint8_t"
        case 5:
            return "uint8_t"
        case 6:
            return "uint8_t"
        case 7:
            return "uint8_t"
        case 8:
            return "uint8_t"
        case 9:
            return "uint16_t"
        case 10:
            return "uint16_t"
        case 11:
            return "uint16_t"
        case 12:
            return "uint16_t"
        case 13:
            return "uint16_t"
        case 14:
            return "uint16_t"
        case 15:
            return "uint16_t"
        case 16:
            return "uint16_t"
        case 32:
            return "uint32_t"
        case 64:
            return "uint64_t"
        case _:
            return "int"

## also dogshit
def generate_can_struct(can_message):
    cpp_class = cpp_generator.CppClass(name = can_message.name, is_struct = True)
    for can_signal in can_message.signals:
        cpp_class.add_variable(cpp_generator.CppVariable(name = can_signal.name,
        type = signal_type_from_length(can_signal.length,can_signal.is_signed),
        is_static = False,
        is_const = False,
        initialization_value = 255))
    return cpp_class


db = get_dbc_files()
#print_message_details(db)



# Create a new code file
can_structs_cpp = code_generator.CodeFile('can_gen_test.cpp')
can_structs_cpp('#include <stdint.h>')
#iterate dbc file, add struct for every message in dbc file
for message in db.messages:
    message_struct = generate_can_struct(message)
    message_struct.render_to_string(can_structs_cpp)

# make header file with IDs
can_ids_cpp = code_generator.CodeFile('can_gen_test.h')
can_ids_cpp('#ifndef _CAN_GEN_TEST_H\n#define _CAN_GEN_TEST_H')
for message in db.messages:
    message_id = message.frame_id
    message_name = "_"+str(message.name)
    can_ids_cpp('#define '+message_name+' '+str(hex(message_id))+'\n')
can_ids_cpp('#endif')

