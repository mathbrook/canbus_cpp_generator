import cantools
import os, sys
def get_dbc_files():
    try:
        path_name = './'
        file_path = []
        file_count = 0
        for root, dirs, files in os.walk(path_name, topdown=False):
            for name in files:
                if ".dbc" in name or ".DBC" in name:
                    fp = os.path.join(root, name)
                    file_path.append(fp)
                    file_count += 1
    except:
        print('FATAL ERROR: Process failed at step 1.')
        sys.exit(0)
    combined_dbc=cantools.database.Database()
    for filename in file_path:
        with open (filename, 'r') as newdbc:
            combined_dbc.add_dbc(newdbc)

    print('Step 1: found ' + str(file_count) + ' files in the DBC files folder')
    return combined_dbc

def print_message_details(db):
    for message in db.messages:
        #print(str(vars(message)) + "\n")
        print(str(message.name)+" ID: "+str(message.frame_id)+" Note: "+str(message.comment))
        print("\tsignals: ")
        for signal in message.signals:
           print(str(vars(signal)))
           #print("\t\t"+ signal.name+ "\tlength: "+ str(signal.length))
    return True

# db = get_dbc_files()
# print_message_details(db)