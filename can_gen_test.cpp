#include <stdint.h>
struct megasquirt_gp50 
{
	
	uint16_t map_accel;
	
	uint16_t total_accel;
	
	uint16_t launch_timer;
	
	uint16_t launch_retard;
	
};


struct megasquirt_gp63 
{
	
	uint8_t generic_pid_duty1;
	
	uint8_t generic_pid_duty2;
	
	uint16_t spare63_1;
	
	uint16_t spare63_2;
	
	uint16_t spare63_3;
	
};


struct megasquirt_gp62 
{
	
	bool gps_west;
	
	uint8_t gps_altk;
	
	uint16_t gps_altm;
	
	uint16_t gps_speed;
	
	uint16_t gps_course;
	
};


struct megasquirt_gp61 
{
	
	uint8_t gps_latdeg;
	
	uint8_t gps_latmin;
	
	uint16_t gps_latmmin;
	
	uint8_t gps_londeg;
	
	uint8_t gps_lonmin;
	
	uint16_t gps_lonmmin;
	
};


struct megasquirt_gp60 
{
	
	uint16_t launch_timing;
	
	uint16_t step3_timing;
	
	uint16_t vsslaunch_retard;
	
	uint16_t cel_status2;
	
};


struct megasquirt_gp59 
{
	
	uint16_t revlim_retard;
	
	uint16_t als_timing;
	
	uint16_t ext_advance;
	
	uint16_t deadtime1;
	
};


struct megasquirt_gp58 
{
	
	uint16_t adv1;
	
	uint16_t adv2;
	
	uint16_t adv3;
	
	uint16_t adv4;
	
};


struct megasquirt_gp57 
{
	
	uint16_t base_advance;
	
	uint16_t idle_cor_advance;
	
	uint16_t mat_retard;
	
	uint16_t flex_advance;
	
};


struct megasquirt_gp56 
{
	
	uint16_t tc_retard;
	
	uint16_t cel_retard;
	
	uint16_t fc_retard;
	
	uint16_t als_addfuel;
	
};


struct megasquirt_gp55 
{
	
	uint16_t looptime;
	
	uint16_t fueltemp_cor;
	
	uint16_t fuelpress_cor;
	
	uint8_t ltt_cor;
	
	uint8_t sp1;
	
};


struct megasquirt_gp54 
{
	
	uint16_t batt_cur;
	
	uint16_t cel_status;
	
	uint8_t fp_duty;
	
	uint8_t alt_duty;
	
	uint8_t load_duty;
	
	uint8_t alt_targv;
	
};


struct megasquirt_gp53 
{
	
	uint16_t fuel_press1;
	
	uint16_t fuel_press2;
	
	uint16_t fuel_temp1;
	
	uint16_t fuel_temp2;
	
};


struct megasquirt_gp52 
{
	
	uint8_t canin1;
	
	uint8_t canin2;
	
	uint8_t canout;
	
	uint8_t knk_rtd;
	
	uint16_t fuelflow;
	
	uint16_t fuelcons;
	
};


struct megasquirt_gp51 
{
	
	uint8_t porta;
	
	uint8_t portb;
	
	uint8_t porteh;
	
	uint8_t portk;
	
	uint8_t portmj;
	
	uint8_t portp;
	
	uint8_t portt;
	
	uint8_t cel_errorcode;
	
};


struct megasquirt_gp49 
{
	
	uint8_t knock_cyl9;
	
	uint8_t knock_cyl10;
	
	uint8_t knock_cyl11;
	
	uint8_t knock_cyl12;
	
	uint8_t knock_cyl13;
	
	uint8_t knock_cyl14;
	
	uint8_t knock_cyl15;
	
	uint8_t knock_cyl16;
	
};


struct megasquirt_gp48 
{
	
	uint8_t knock_cyl1;
	
	uint8_t knock_cyl2;
	
	uint8_t knock_cyl3;
	
	uint8_t knock_cyl4;
	
	uint8_t knock_cyl5;
	
	uint8_t knock_cyl6;
	
	uint8_t knock_cyl7;
	
	uint8_t knock_cyl8;
	
};


struct megasquirt_gp47 
{
	
	uint16_t fuel_pct;
	
	uint16_t tps_accel;
	
	uint16_t SS1;
	
	uint16_t SS2;
	
};


struct megasquirt_gp46 
{
	
	uint8_t vvt_duty1;
	
	uint8_t vvt_duty2;
	
	uint8_t vvt_duty3;
	
	uint8_t vvt_duty4;
	
	uint16_t inj_timing_pri;
	
	uint16_t inj_timing_sec;
	
};


struct megasquirt_gp45 
{
	
	uint16_t vvt_target1;
	
	uint16_t vvt_target2;
	
	uint16_t vvt_target3;
	
	uint16_t vvt_target4;
	
};


struct megasquirt_gp44 
{
	
	uint16_t vvt_ang1;
	
	uint16_t vvt_ang2;
	
	uint16_t vvt_ang3;
	
	uint16_t vvt_ang4;
	
};


struct megasquirt_gp43 
{
	
	uint8_t synccnt;
	
	uint8_t syncreason;
	
	uint16_t sd_filenum;
	
	uint8_t sd_error;
	
	uint8_t sd_phase;
	
	uint8_t sd_status;
	
	uint8_t timing_err;
	
};


struct megasquirt_gp42 
{
	
	uint16_t VSS1;
	
	uint16_t VSS2;
	
	uint16_t VSS3;
	
	uint16_t VSS4;
	
};


struct megasquirt_gp39 
{
	
	uint16_t EGOcor5;
	
	uint16_t EGOcor6;
	
	uint16_t EGOcor7;
	
	uint16_t EGOcor8;
	
};


struct megasquirt_gp41 
{
	
	uint16_t EGOcor13;
	
	uint16_t EGOcor14;
	
	uint16_t EGOcor15;
	
	uint16_t EGOcor16;
	
};


struct megasquirt_gp40 
{
	
	uint16_t EGOcor9;
	
	uint16_t EGOcor10;
	
	uint16_t EGOcor11;
	
	uint16_t EGOcor12;
	
};


struct megasquirt_gp38 
{
	
	uint16_t EGOcor1;
	
	uint16_t EGOcor2;
	
	uint16_t EGOcor3;
	
	uint16_t EGOcor4;
	
};


struct megasquirt_gp37 
{
	
	uint16_t EGOv13;
	
	uint16_t EGOv14;
	
	uint16_t EGOv15;
	
	uint16_t EGOv16;
	
};


struct megasquirt_gp36 
{
	
	uint16_t EGOv9;
	
	uint16_t EGOv10;
	
	uint16_t EGOv11;
	
	uint16_t EGOv12;
	
};


struct megasquirt_gp35 
{
	
	uint16_t EGOv5;
	
	uint16_t EGOv6;
	
	uint16_t EGOv7;
	
	uint16_t EGOv8;
	
};


struct megasquirt_gp34 
{
	
	uint16_t EGOv1;
	
	uint16_t EGOv2;
	
	uint16_t EGOv3;
	
	uint16_t EGOv4;
	
};


struct megasquirt_gp33 
{
	
	uint8_t duty_pwm1;
	
	uint8_t duty_pwm2;
	
	uint8_t duty_pwm3;
	
	uint8_t duty_pwm4;
	
	uint8_t duty_pwm5;
	
	uint8_t duty_pwm6;
	
	uint8_t gear;
	
	uint8_t status8;
	
};


struct megasquirt_gp32 
{
	
	uint8_t AFR9;
	
	uint8_t AFR10;
	
	uint8_t AFR11;
	
	uint8_t AFR12;
	
	uint8_t AFR13;
	
	uint8_t AFR14;
	
	uint8_t AFR15;
	
	uint8_t AFR16;
	
};


struct megasquirt_gp31 
{
	
	uint8_t AFR1;
	
	uint8_t AFR2;
	
	uint8_t AFR3;
	
	uint8_t AFR4;
	
	uint8_t AFR5;
	
	uint8_t AFR6;
	
	uint8_t AFR7;
	
	uint8_t AFR8;
	
};


struct megasquirt_gp30 
{
	
	uint16_t accelx;
	
	uint16_t accely;
	
	uint16_t accelz;
	
	uint8_t stream_level;
	
	uint8_t water_duty;
	
};


struct megasquirt_gp29 
{
	
	uint16_t EAEfcor1;
	
	uint16_t EAEfcor2;
	
	uint16_t VSS1dot;
	
	uint16_t VSS2dot;
	
};


struct megasquirt_gp28 
{
	
	uint16_t cl_idle_targ_rpm;
	
	uint16_t tpsadc;
	
	uint16_t eaeload;
	
	uint16_t afrload;
	
};


struct megasquirt_gp27 
{
	
	uint16_t canpwmin1;
	
	uint16_t canpwmin2;
	
	uint16_t canpwmin3;
	
	uint16_t canpwmin4;
	
};


struct megasquirt_gp26 
{
	
	uint8_t nitrous1_duty;
	
	uint8_t nitrous2_duty;
	
	uint16_t nitrous_timer_out;
	
	uint16_t n2o_addfuel;
	
	uint16_t n2o_retard;
	
};


struct megasquirt_gp25 
{
	
	uint16_t egt13;
	
	uint16_t egt14;
	
	uint16_t egt15;
	
	uint16_t egt16;
	
};


struct megasquirt_gp24 
{
	
	uint16_t egt9;
	
	uint16_t egt10;
	
	uint16_t egt11;
	
	uint16_t egt12;
	
};


struct megasquirt_gp23 
{
	
	uint16_t egt5;
	
	uint16_t egt6;
	
	uint16_t egt7;
	
	uint16_t egt8;
	
};


struct megasquirt_gp22 
{
	
	uint16_t egt1;
	
	uint16_t egt2;
	
	uint16_t egt3;
	
	uint16_t egt4;
	
};


struct megasquirt_gp21 
{
	
	uint16_t pwseq13;
	
	uint16_t pwseq14;
	
	uint16_t pwseq15;
	
	uint16_t pwseq16;
	
};


struct megasquirt_gp20 
{
	
	uint16_t pwseq9;
	
	uint16_t pwseq10;
	
	uint16_t pwseq11;
	
	uint16_t pwseq12;
	
};


struct megasquirt_gp19 
{
	
	uint16_t pwseq5;
	
	uint16_t pwseq6;
	
	uint16_t pwseq7;
	
	uint16_t pwseq8;
	
};


struct megasquirt_gp18 
{
	
	uint16_t pwseq1;
	
	uint16_t pwseq2;
	
	uint16_t pwseq3;
	
	uint16_t pwseq4;
	
};


struct megasquirt_gp17 
{
	
	uint16_t boost_targ_1;
	
	uint16_t boost_targ_2;
	
	uint8_t boostduty;
	
	uint8_t boostduty2;
	
	uint16_t maf_volts;
	
};


struct megasquirt_gp16 
{
	
	uint16_t sensors13;
	
	uint16_t sensors14;
	
	uint16_t sensors15;
	
	uint16_t sensors16;
	
};


struct megasquirt_gp15 
{
	
	uint16_t sensors9;
	
	uint16_t sensors10;
	
	uint16_t sensors11;
	
	uint16_t sensors12;
	
};


struct megasquirt_gp14 
{
	
	uint16_t sensors5;
	
	uint16_t sensors6;
	
	uint16_t sensors7;
	
	uint16_t sensors8;
	
};


struct megasquirt_gp13 
{
	
	uint16_t sensors1;
	
	uint16_t sensors2;
	
	uint16_t sensors3;
	
	uint16_t sensors4;
	
};


struct megasquirt_gp12 
{
	
	uint32_t wallfuel1;
	
	uint32_t wallfuel2;
	
};


struct megasquirt_gp11 
{
	
	uint16_t fuelload2;
	
	uint16_t ignload;
	
	uint16_t ignload2;
	
	uint16_t airtemp;
	
};


struct megasquirt_gp10 
{
	
	uint8_t status1;
	
	uint8_t status2;
	
	uint8_t status3;
	
	uint8_t status4;
	
	uint16_t status5;
	
	uint8_t status6;
	
	uint8_t status7;
	
};


struct megasquirt_gp9 
{
	
	uint16_t egoV1;
	
	uint16_t egoV2;
	
	uint16_t dwell;
	
	uint16_t dwell_trl;
	
};


struct megasquirt_gp8 
{
	
	uint16_t MAFload;
	
	uint16_t fuelload;
	
	uint16_t fuelcor;
	
	uint16_t MAF;
	
};


struct megasquirt_gp7 
{
	
	uint16_t cold_adv_deg;
	
	uint16_t TPSdot;
	
	uint16_t MAPdot;
	
	uint16_t RPMdot;
	
};


struct megasquirt_gp6 
{
	
	uint16_t totalcor;
	
	uint16_t ve1;
	
	uint16_t ve2;
	
	uint16_t iacstep;
	
};


struct megasquirt_gp5 
{
	
	uint16_t warmcor;
	
	uint16_t tpsaccel;
	
	uint16_t tpsfuelcut;
	
	uint16_t barocor;
	
};


struct megasquirt_gp4 
{
	
	uint16_t knock;
	
	uint16_t egocor1;
	
	uint16_t egocor2;
	
	uint16_t aircor;
	
};


struct megasquirt_gp3 
{
	
	uint16_t tps;
	
	uint16_t batt;
	
	uint16_t afr1_old;
	
	uint16_t afr2_old;
	
};


struct megasquirt_gp2 
{
	
	uint16_t baro;
	
	uint16_t map;
	
	uint16_t mat;
	
	uint16_t clt;
	
};


struct megasquirt_gp1 
{
	
	uint16_t adv_deg;
	
	uint8_t squirt;
	
	uint8_t engine;
	
	uint8_t afrtgt1;
	
	uint8_t afrtgt2;
	
	uint8_t wbo2_en1;
	
	uint8_t wbo2_en2;
	
};


struct megasquirt_gp0 
{
	
	uint16_t seconds;
	
	uint16_t pw1;
	
	uint16_t pw2;
	
	uint16_t rpm;
	
};


struct MSGID_0X6B1 
{
	
	uint16_t Pack_DCL;
	
	uint16_t Pack_CCL;
	
	uint8_t High_Temperature;
	
	uint8_t Low_Temperature;
	
	uint8_t Average_Temperature;
	
	uint8_t CRC_Checksum;
	
};


struct MSGID_0X6B2 
{
	
	uint16_t Pack_Current;
	
	uint16_t Pack_Open_Voltage;
	
	uint16_t Pack_Inst_Voltage;
	
	uint16_t Pack_Summed_Voltage;
	
};


struct MSGID_0X1806E7F4 
{
	
	uint16_t Maximum_Pack_Voltage;
	
	uint16_t Pack_CCL;
	
	bool Blank26;
	
	bool Blank27;
	
	bool Blank28;
	
	bool Blank29;
	
	bool Blank30;
	
	bool Blank31;
	
	bool Blank32;
	
	bool DTC_P0A08_Charger_Safety_Relay_Fault;
	
	uint8_t Blank33;
	
	uint8_t Blank34;
	
	uint8_t Blank35;
	
};


struct MSGID_0X1806E9F4 
{
	
	uint16_t Maximum_Cell_Voltage;
	
	uint16_t Pack_CCL;
	
	bool Blank36;
	
	bool Blank37;
	
	bool Blank38;
	
	bool Blank39;
	
	bool Blank40;
	
	bool Blank41;
	
	bool Blank42;
	
	bool DTC_P0A08_Charger_Safety_Relay_Fault;
	
	uint8_t Blank43;
	
	uint8_t Blank44;
	
	uint8_t Blank45;
	
};


struct MSGID_0X1806E6F4 
{
	
	uint16_t High_Cell_Voltage;
	
	uint16_t Low_Cell_Voltage;
	
	uint16_t Minimum_Cell_Voltage;
	
	uint8_t Constant_Value1;
	
	uint8_t Constant_Value2;
	
};


struct MSGID_0X1806E6F4 
{
	
	uint16_t Maximum_Pack_Voltage;
	
	uint16_t Pack_CCL;
	
	bool Blank1;
	
	bool Blank2;
	
	bool Blank3;
	
	bool Blank4;
	
	bool Blank5;
	
	bool Blank6;
	
	bool Blank7;
	
	bool DTC_P0A08_Charger_Safety_Relay_Fault;
	
	uint8_t Pack_DCL;
	
	uint8_t Blank;
	
	uint8_t Constant_Value3;
	
};


struct MSGID_0X1806E5F4 
{
	
	uint16_t Maximum_Cell_Voltage;
	
	uint16_t Pack_CCL;
	
	bool Blank8;
	
	bool Blank9;
	
	bool Blank10;
	
	bool Blank11;
	
	bool Blank12;
	
	bool Blank13;
	
	bool Blank14;
	
	bool DTC_P0A08_Charger_Safety_Relay_Fault;
	
	uint8_t Blank15;
	
	uint8_t Blank16;
	
	uint8_t Blank17;
	
};


struct MSGID_0X1806E6F4 
{
	
	uint16_t Adaptive_Amphours;
	
	uint16_t Pack_Amphours;
	
	uint16_t Maximum_Cell_Voltage;
	
	uint8_t Populated_Cells;
	
	uint8_t Constant_Value4;
	
};


struct MSGID_0X18FF50E5 
{
	
	uint8_t Blank18;
	
	uint8_t Blank19;
	
	uint8_t Blank20;
	
	uint8_t Blank21;
	
	uint8_t Blank22;
	
	uint8_t Blank23;
	
	uint8_t Blank24;
	
	uint8_t Blank25;
	
};


