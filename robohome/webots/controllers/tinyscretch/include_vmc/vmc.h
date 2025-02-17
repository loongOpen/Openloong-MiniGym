#define F_CONTROL_WITH_ROLL   1   //补偿横滚力的输出
#define F_EST_WITH_ROLL       1   //估计力使用横滚补偿

#define EN_ONLINE_PLAN        1  //摆动一直规划落足点
#define SWING_USE_SPD_MODE    1  //摆动使用速度输出需要使用新FP控制 不使用下台阶更平滑
#define POS_FF_USE_NEW		  1

#define USE_FORCE_REAL_GROUND 1 //真实着地力分配 区别不大

#define SW_WITH_REAL_FB 0//不使用反馈利于低控制频率
//新状态机：新规划 使用反馈差于不使用 但是下台阶时不太行    GROUND_AFTER_TRIG=0|| 老规划  不行和实物类似
//老状态机：：新规划 使用反馈好 GROUND_AFTER_TRIG=0  l||老规划 可以 GROUND_AFTER_TRIG=0
//->使用老规划和老状态机 不使用反馈   ->新状态机+老规划

#define GROUND_AFTER_TRIG     0//    规划和老状态机：：使用后估计高度不跳变  没法处理台阶和上坡？？ 横滚容易周期波动

#define EN_AUTO_FORWARD 1  //自动遥控前进
#define EN_AUTO_ROTATE  1
#define TROT_AUTO_ATT   0  //自动遥控姿态
//---------------------------------------------------------------------------------------------------------------------

#define USE_QP 0//使用QP优化力分配
#define EN_F_T_G 0 //位力混控转换地形 不好  造成ROLL波动
#define NO_RC 1
#define NO_RC_DIR_TROT 1//无遥控直接进入Trot

#define STAND_GROUND_CHECK_TEST 1

#define GROUND_USE_EST 1
#define G_FORCE_EST_USE_POS 1//USE_FPOS_CONTROL会自动屏蔽
#define USE_FPOS_CONTROL 1

typedef unsigned short uint16_t;
typedef unsigned char  uint8_t;
typedef unsigned char  uint8;                   /* defined for unsigned 8-bits integer variable 	ÎÞ·ûºÅ8Î»ÕûÐÍ±äÁ¿  */
typedef signed   char  int8;                    /* defined for signed 8-bits integer variable		ÓÐ·ûºÅ8Î»ÕûÐÍ±äÁ¿  */
typedef unsigned short uint16;                  /* defined for unsigned 16-bits integer variable 	ÎÞ·ûºÅ16Î»ÕûÐÍ±äÁ¿ */
typedef signed   short int16;                   /* defined for signed 16-bits integer variable 		ÓÐ·ûºÅ16Î»ÕûÐÍ±äÁ¿ */
typedef unsigned int   uint32;                  /* defined for unsigned 32-bits integer variable 	ÎÞ·ûºÅ32Î»ÕûÐÍ±äÁ¿ */
typedef signed   int   int32;                   /* defined for signed 32-bits integer variable 		ÓÐ·ûºÅ32Î»ÕûÐÍ±äÁ¿ */
typedef float          fp32;                    /* single precision floating point variable (32bits) µ¥¾«¶È¸¡µãÊý£¨32Î»³¤¶È£© */
typedef double         fp64;                    /* double precision floating point variable (64bits) Ë«¾«¶È¸¡µãÊý£¨64Î»³¤¶È£© */
typedef uint16_t u16;
typedef uint8_t  u8;
typedef   signed          char int8_t;
typedef   signed short     int int16_t;
typedef   signed           int int32_t;
typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;


#define CODE_VER2  //ȫ����ͨ������		need U-key
//#define CODE_VER1    //�ֽ�ʽ������ FAKE force-pos control  need U-key


#define GAIT_TEST_MODE 0  //��̬������
#define USE_DEMO 0 			  //1->ʹ�ÿ�ԴDEMO����  FAKE force control
#define VIR_MODEL 0  			//ʹ�����������ģ�Ͳ��Ե����㷨  ������
#define DEBUG_MODE 0 			//����ģʽ����������3��						������

#define CHECK_USE_SENSOR 0//����ʹ�û����˴��������ݹ����ŵص�
#define USE_LOW_TORQUE 1	//�Ͷ������
#define HIGE_LEG_TRIG 0 	//��̧�ȹ켣
#define SLIP_MODE     1   //����ģʽ

#define USE_ESO_OBSEVER   		1//			ʹ��ESO��Ϊ���ٶȹ۲���
#define ODOM_SPD_MODE         1//			1��̼�ʹ���ٶ�ģʽ
#define END_SPD_USE_POS       0//			1ĩ���ٶ���λ��΢��  1WS
#define ODOM_SPD_USE_LEG_AV   1//     ��̼��ٶ�ʹ��ĩ���ٶ�΢�֡

#define USE_NEW_INV_MODLE		  0//			ʹ�ð����߶ȵĵ����ڿ��λ��ģ��
#define EN_PLAN_USE_JERK  		0//     ʹ����СJERK��˹켣�滮  2->ʹ����ʵ�ٶȹ滮
#define USE_MIT_SCHE     		  0//     ʹ��MIT��̬����
#define TRIG_USE_NN 					1//			ȫ�����������̼� ��ͷ������������ϵWALK
#define EN_TRIG_ATT_FIX       1//     ����ڶ�������������̬����
#define Z_UNMATCH_USE_GROUND  1//			ʧ��ʹ��ȫ�ֽ���  				 //WS �ԱȲ�����
#define EN_TORQUE_RESET       0//     ʹ�ö����ظ�λ  					 //WS 1��Խ��ߴ���

#define USE_FORCE_FP_LEG      1//     FTrot���ȹ滮ǰ����

#define TRIG_USE_GLOBAL_V1    1//
#define TRIG_USE_GLOBAL       0//     ����ȫ�ֿ��� 
#define USE_ATT_POLAR     		0//			ʹ�ü�����ϵ�ǶȲ���
#define GLOBAL_CONTROL 0  		//			ȫ����̬����  0->Ŀǰ�Ƚ��ȶ�
#define DOUBLE_LOOP 0					//			������̬����
#define USE_MODEL_FOR_ATT_CAL 1//	    ʹ�û�еģ���ں�IMU������̬
#define EN_GAIT_SWITCH        0//     ��̬�Զ��л�
#define EN_AUTO_STAND_SELFRIGHT 1//   �Ը�λ���Զ�����վ��ģʽ
#define EN_AUTOZ_SWING_ATT    0//     ʹ�ܰڶ��߶�����̬�Զ�����
#define NEW_GLOBAL_TRIG       0//     ȫ�ֿ���RT��ת
#define CHECK_FALL_ERR        1//     ˤ�����
#define EN_AUTO_POWER_OFF     0//     ��ң���Զ��ϵ�
#define USE_FORCE_CONTROL 		0//     ʹ������
#define USE_JACOBI_DIRECT_VMC 0//     ʹ���ſ˱�ֱ�Ӽ�����ٶ����
#define USE_FULL_INVERT   		0//     ���ñ�ʽ5����
#define TRIG_Z_CHECK_GLOBAL   0//     TDʹ��ȫ����̬�²�Z
//-------����ѡ��--------
#define MINI_LITTRO_DOG    //Mocomoco  ����
//#define BIG_LITTRO_DOG	 //Big moco  ����

#define LEG_DOF 2	      				//�����˹ؽ����ɶ�
#define USE_DJ_NOLINEAR  0      //С�ȶ��������ӳ��

#define SAFE_SITA1_LOOP 90
#define SAFE_SITA2_LOOP 34
#define SAFE_SITA3_LOOP 15

#define SAFE_SITA1_PLOOP -80
#define SAFE_SITA2_PLOOP 120

#if USE_FULL_INVERT
#define SAFE_SITA1 180+30
#define SAFE_SITA2 -30
#else
#define SAFE_SITA1 -30
#define SAFE_SITA2 180+30
#endif


#define MINI_TO_BIG 0    //ֱ��ʹ��С�����˲����Ŵ����������
#define USE_FALL_RECOVER 0 //ʹ�ö������(��Ҫ�������)
//-------ϵͳ����--------
#define MIN_SPD_ST 0.003
#define MIN_SPD_ST_RAD 1
#define T_RST 1.5
#define MAX_FSPD 0.5   //����ٶ�����m/s
#define POS_DEAD 0.05  //��������m
#define YAW_POS_MAX 25
#define RECOVER_PWMS  2500 //������ʼPWM
#define RECOVER_PWMT  500//����ʱPWM
extern float MAX_SPD, MAX_SPD_RAD;
extern float MIN_Z, MAX_Z, MIN_X, MAX_X, MIN_Y, MAX_Y;
extern float gait_test[5];
extern u8 force_dj_off_reset;


#define CUSTOM 0 
#define MOCO8_PRO 1 
#define MOCO8_MID 2
#define MOCO8_CHEETHA 3
#define MOCO8_LS3 4
#define MOCO12_PRO 5 
#define MOCO12_LS3  6
#define MOCO12_SPOT 7
#define MOCO12_SPOTMINI 8
#define MOCO12_HYQ 9
#define MOCO12_ANYMAL 10


#define IDLE 0
#define TROT 1
#define F_TROT 2
#define STAND_RC 3
#define STAND_IMU 4
#define RECOVER 5
#define FALLING 6
#define CLIMB 7
#define WALK 8
#define WALK_E 9
#define CRAWL 10
#define PRONK 11
#define BOUND 12


#define M_SAFE  0
#define M_STAND_RC 1
#define M_STAND_IMU  2
#define M_STAND_PUSH 3
#define M_TROT 4
#define M_F_TROT 5
#define M_WALK 6
#define M_RECOVER 7
#define M_FALLING 8
#define M_CLIMB 9
#define M_WALKE 10
#define M_CRAWL 11
#define M_PRONK 12 
#define M_BOUND 13

#define PARALE 0
#define LOOP 1
#define PARALE_LOOP 2

#define UART 0
#define SBUS 1 
#define SMART 2

#define DJ_MG995 9.34
#define DJ_MG956 9.34
#define DJ_MG955 9.34
#define DJ_MG945 5.7
#define DJ_MG355 11.34
#define DJ_6221MG 12.64
#define DJ_DSERVO 11.34
#define DJ_9G 9.34
#define DJ_DSB 11.3
#define DJ_KPOWER 11.3
#define DJ_BLS892MG 5.37
#define DJ_EMAX_ES08MA 9.8
#define DJ_MG90S 12
#define DJ_SG92R 11.3
#define DJ_DM0090 11.3
#define DJ_S892 5.4 //GDW HV���
#define DJ_GDW_RS0708 9.8//GDW 9g���

typedef struct
{
	long mcuID[4];
	int board_id_test[3];
	int board_license_test[3];
	int board_license_check[3], board_ido[3];
	char key_right;
}_LISENCE;
extern _LISENCE lisens_vmc;

typedef struct
{
	float x;
	float y;
	float z;
	float zz;
}END_POS;

typedef struct
{
	float fp, kp, ki, kd, max_ki, max_out;
	float fpp, p, i, d, out;
	float exp, err, interge, err_reg;
	float kp_i, k_i, kd_i, max_ki_i, max_out_i;
	float fp_i, p_i, i_i, d_i, out_i;
	float err_i, interge_i, err_reg_i;
	float in_set_force;
}PID;

extern PID h_pid_all, att_pid_all[3], pos_pid[2], pos_pid_all, extend_pid[4], extend_pid_all;
extern PID att_pid_outter_all[2], att_pid_inner_all[2];


typedef struct
{
	float pos_now[3];
	float spd_now[3];
	float acc_now[3];
	float Tsw;//=0.25;
	float leg_dis;//=0.5;
	float leg_h;//=0.25;
	float spd_lift;//=0.8;
	float scale_x;//=1.25;
	float scale_y;//=0.5;
	float scale_z;
	float scale_lift;//=1.5;
	float max_spd;//=leg_dis/Tsw;
	float limit_spd;//= max_spd*4;
	char flag[3];
	float T12;//=Tsw*0.2;%???????
	float T45;//=T12;
	float T23;//=(Tsw-T12*2)/2;
	float T34;//=T23;

	float p1[3], p2[3], p3[3], p4[3], p5[3];
	float v1[3], v2[3], v3[3], v4[3], v5[3];
	float a1[3], a2[3], a3[3], a4[3], a5[3];
	float a12[3], b12[3], g12[3];
	float a23[3], b23[3], g23[3];
	float a34[3], b34[3], g34[3];
	float a45[3], b45[3], g45[3];
}END_PLANNER;

void get_trajecotry_end(float p0, float v0, float a0, float a, float  b, float g, float t, float *pos, float *acc, float *spd);
void plan_end(float p0, float v0, float a0, float pf, float vf, float af, float Tf, char flag[3], float *a, float *b, float *g, float *cost);


typedef struct
{
	char id, id_dig, id_side, trig_state, ground_state, invert_knee;
	char st_torque_need_init, sw_torque_need_init;
	int invert_knee_epos[2];
	float ground_state_cnt;
	float sita_limit;
	float sita1_off, sita2_off, sita3_off;
	float spd_dj[3];
	float lift_spd, td_spd;
	float flt_toqrue;
	float gain_torque;
	float delta_h, delta_h_att_off;
	float kp_trig;
	float time_trig;
	float spd_est_cnt;
	float pid[3][5];
	float ground_force[3];
	END_POS tar_epos, tar_epos_b, tar_epos_n, tar_epos_h, tar_epos_n_reg, tar_epos_h_reg;
	int PWM_OFF[4], PWM_OFF_OCU[4];
	int PWM_MIN[4], PWM_MAX[4];
	float PWM_OUT[4], PWM_OUT_OCU[4];				//PWM���
	float PWM_PER_DEGREE[4], PWM_PER_DEGREE_OCU[4];//PWM�Ƕ�����
	int sita_flag[4], sita_flag_ocu[4];				//PWM���ӷ���
	float sita[4];
	float st_time_used;
	float sw_time_used;
	float st_protect_timer;
	END_PLANNER end_planner;
}PARAM;


//���Ƚṹ�����
typedef struct
{
	float l1, l2, l3, l4;
	float r;
	float tar_sita1, tar_sita2, tar_sita3;
	float sita1, sita2, sita3, sita;
	END_POS epos, epos_b, epos_n, e_pos_base[2], epos_reg, epos_regn, epos_vm, spd, spd_n, spd_b, spd_o, spd_on, spd_o_angle, tar_epos, tar_epos_n, tar_epos_force, check_epos, tar_spd, st_pos, tar_pos;
	END_POS epos_td_n, epos_lf_n, tar_epos_h_reg, tar_epos_h, tar_epos_n_reg;
	END_POS epos_sw_end_n;
	END_POS epos_td_hn, epos_lf_hn;
	END_POS epos_spdd_n, epos_spdd_b;
	END_POS epos_sw_st_n, epos_sw_st_b;
	END_POS epos_nn;
	END_POS odom_st ;
	float sita_reg[3];
	float tar_h, h, dh;
	float jacobi33[9], ijacobi33[9];
	float jacobi22[4], ijacobi22[4];
	char ground, ground_s, is_touch;
	float ground_force[3];
	float force[3], force_b[3], force_n[3], force_cmd[3];
	float torque[3];
	int flag_fb, flag_rl;
	float force_deng[4];
	float cnt_ss;
	PARAM param;
}VMC;


typedef struct
{ //phase
	char ref_leg;
	float timer[2];
	float t_ref;
	float t_d;
	float ti[4];
	float T_all;
	float T_sw;
	float T_st;

	float dS[4];
	float S_target[4];
	float S_now[4];
	float S_st[4];
	float S_sw[4];
	float S_sw_ref_reg, S_st_ref_reg;
	float sw_start[4], sw_end[4];//NEW
	int ground_flag[4][2];
	float tg;
	float tg_st;
	float w_gait_change;
	float t_gait_change;
	float min_st_rate;
	int gait_mode[2];
	//event
	char state[4];
}GAIT_SHEC;


int gait_trj_planner_init(VMC* in, GAIT_SHEC* gait, char end_sel);
int gait_trj_get(VMC* in, GAIT_SHEC* gait, float time_now);
void end_plan_test(float dt);
//----------------------------------VMCȫ�ֿ������ṹ��--------------------------
typedef struct
{
	float pid_pit[3];
	float pid_rol[3];
	float pid_yaw[3];
	float pid_vx[3];
	float pid_vy[3];
	float pid_posxy[3];
	float pid_posz[3];
	float move_com_off[2];
	float move_att_off[2];
	float leg_off[2];
	float side_off[2], side_off_stand[2], side_off_walk[2];
	float stance_xy_kp[2];
	float stance_zoff_kp;
	float stance_time[2];
	float swing_hight;
	float swing_spdkp[2];
	float posz_idle[3];
	float slip_p[3];
	float servo_pd[2];
	float servo_flt, servo_time[3];
	float ground_seek_spd;
}PARAM_VMC;

typedef struct
{
	//----------ϵͳ����----------------
	PARAM_VMC param_vmc;
	PARAM_VMC param_vmc_default;
	char test_mode[3];
	int test_mode_on;
	float test_mode_on_cnt;
	float test_pos[3], test_att[3];
	float test_pos_flt[3], test_att_flt[3];
	float test_force[3];
	int leg_dof;
	char leg_type;
	char robot_type;
	char dj_type;
	char rc_type;
	char robot_mode;
	char use_default_sys_param;
	float end_sample_dt;//����ٶ�΢��ʱ��
	float ground_dump;//���׻�������
	float trig_ground_st_rate;//���Ⱥ�ʹ�ܴ���ֹͣ�ı���
	float ground_rst;//�Դ�������
	float angle_set_trig;//���ȴ���ֹͣ�Ƕ�����
	float control_out_of_maxl;//��̬���������������ȳ�����	
	float att_limit_for_w;//����Ȩ�����ĽǶ�����
	float kp_pose_reset[2];//�Ը�λ��������
	float k_mb;
	float gain_control_x, move_check_x;
	float safe_sita[3];
	END_POS gait_sw_end_reg_n[4];
	char trot_sw_end_flag[4];
	//------------on board----------
	END_POS tar_pos_on, tar_spd_on;
	float tar_att_on[3];
	//-----------ϵͳ����--------------
	char param_save, cmd_use_ocu, send_mask;
	char stand_trot_switch_flag;
	char stand_switch_flag[2];
	char stand_switch_cnt[2];
	float leg_param[6];
	float att_limit[3];
	float ground_force[4][3];
	float encoder_spd[2];
	float cog_off_use[4];
	END_POS tar_spd_use[2], tar_spd_use_rc, tar_epos_h_reg, tar_epos_h, tar_epos_n_reg;
	float line_z[2];//����ʧ��߶�
	float cog_z_curve[3];//ģ��Ԥ��COG����״̬
	float w[10], w_t[10], w_cmd[10], weight[10];
	float max_l, max_to_end;//����ȳ�
	float dt_size[2];//�������ڱ仯���µĲ������ű���
	char  jump_state;
	float jump_tar_param[2];//�߶� ����
	float jump_param_use[5];
	float jump_out[3];
	float MAX_Z, MIN_Z, MAX_X, MIN_X, MAX_Y, MIN_Y, MAX_PIT, MAX_ROL, MAX_YAW;
	//-------------ģʽ-------------
	char en_gait_switch, en_fall_protect;
	char control_mode_all;
	char have_cmd, have_cmd_rc[2], have_cmd_sdk[2][4], en_sdk, soft_start;
	char control_mode, rc_mode[2];//����ģʽ
	char en_hold_on;
	char en_att_tirg;
	char cal_flag[5];//������У׼��־λ
	char smart_control_mode[3];//pos/spd   high  att/rad
	char key[10];
	int rc_input[10];
}PARAM_ALL;

typedef struct
{
	//-------------��Ȩ�����--------------
	u8 key_right, trot_state;		 //��Ȩ���Ƿ���ȷ
	float version[2];
	char your_key[3];//�����Ȩ��
	int lisence_test[3];
	int your_key_all;
	int board_id[4]; //������ID
	char gait_mode, gait_mode_reg;
	float sita_test[5];//[4]->1  ǿ�ƽǶȲ���
	//---------------------------------------
	u8 ground[2][4];
	END_POS tar_pos, tar_spd, tar_spd_rc;
	float tar_att[3], tar_att_rate[3], tar_att_off[3], tar_att_bias[3], ground_off[2];
	//------------------------------------------
	float kp_trig[2], kp_deng_gain[2], kp_deng[4], kd_deng[2], deng_all, kp_deng_ctrl[2][4], k_auto_time, kp_g[2];
	float kp_touch, kp_lift, lift_rate, rst_dead, out_range_force;
	float pid[3][7], att_gain_length[2];
	float delta_ht[2], delta_h_att_off, gain_torque;
	float cog_off[6], off_leg_dis[3];
	//
	float l1, l2, l3, l4, W, H, mess, flt_toqrue;
	float gait_time[4];
	float gait_alfa;//0~1
	float delay_time[3], gait_delay_time, stance_time, stance_time_auto;
	//
	float att_trig[4], att_ctrl[4], att_rate_trig[3], att_rate_ctrl[3], att[3], att_rate[3], att_vm_b[3], att_vm[3], att_rate_vm[3], att_vmo[3], acc[4];
	float ground_att[3], ground_att_est[3], ground_att_cmd[3];
	float body_spd[4];
	END_POS pos, pos_n, pos_n_fp, pos_vm_leg, pos_vm_leg_n;
	END_POS cog_pos_n, zmp_pos_n, cog_spd_n, zmp_spd_n;

	END_POS spd, spd_n;
	END_POS acc_n, acc_b;

	END_POS odom_st, ankle_pos_n[4];
	float FALL[3], FALL_Interge[3], F_FP[3], TALL[3], T_FP[3];
	float yaw_force, exp_yaw_rate;
	float Rb_n[3][3];
	float Rn_b[3][3];
	float acc_norm;
	char use_att, att_imu, trig_mode, gait_on, use_ground_sensor[2], ground_num, leg_power, power_state;
	char use_ground_sensor_new;
	float end_dis[4];
	u8 err, unmove, hand_hold, fall, fly, fall_self;
	PARAM_ALL param;
}VMC_ALL;

typedef struct {
	END_POS pos_n_fp;
	int gait_phase, gait_phase_reg;
	float sita[2][4];
	float fp_out[3][3], fp_out_flt[3][3];
	float rate_all[2][4];
	float gain_all[3];
	float cut_rate[3];

	float force_flag[4], angle[4], d_angle[5];
	float impulse_fp[4], impulse_k_fp;
	float impulse_fb[4], impulse_k_fb;
	float force_jump_fp[4], force_jump_fb[4], force_damp[4], force_jump_all[4], force_fp_flt[4];
}_SLIP;

extern _SLIP slip_mode;
typedef struct {
	u8 mode;
	u8 connect;
	u16 lost_cnt;
	float dt;
	float set_pos, set_spd, set_i;

	float pos, spd;
	float i_all, i_bus, v_bus;
	float c_kp, c_ki, p_kp, p_kd, s_kp, s_kd;
	float pos_off;
}_BLDC;


typedef struct {
	u8 mode;
	u8 connect;
	u16 lost_cnt;
	float angle[3], angle_cmd[3];
	float angle_set[3];
	float rc_k[3];
	float per_deg[3];
	float pid[3][5];
	int flag[3];
	int OFF[3];
	int OUT[3];
	char en_att_control[3];
}_GIMBAL;

typedef struct {
	float high_leg_end;
	float gait_duty;
	float max_spd;
	float max_rad;
	float gain_control_x;
	float cog_off[2];
	float kp_trig[3];
	float move_check_x;
	float slip_kp, slip_fp, slip_kp_pos;
}_GAIT_PARM;

typedef struct {
	char connect;
	int loss_cnt;
	char mode;
	char up_mode;
	float rc_spd_b[3], rc_rate_b[3];

	char cmd_robot_state;
	float rc_spd_w[2], rc_att_w[2], rate_yaw_w;
	int key_ud, key_lr;
	char key_x, key_y, key_a, key_b, key_ll, key_rr, key_st, key_back;
	int key_ud_reg, key_lr_reg;
	char key_x_reg, key_y_reg, key_a_reg, key_b_reg, key_ll_reg, key_rr_reg, key_st_reg, key_back_reg;
	float curve[20];

	char sbus_conncect;
	char sbus_power_sw, sbus_power_sw_reg;
	int sbus_rc_main[4];
	int sbus_rc_main_reg[4];
	int sbus_mode, sbus_mode_reg;
	int sbus_mode_e, sbus_mode_e_reg;
	float sbus_height, sbus_height_reg;
	int sbus_aux[4];
	int sbus_aux_reg[4];

}_OCU_VMC;

extern _OCU_VMC ocu;
extern _GAIT_PARM tort_p, walk_p, ftort_p, init_p, bound_p, pace_p, climb_p, custom_gait, crawl_p, pronk_p, bound_p;
extern _GIMBAL gimbal;
extern _BLDC bldc[12];
extern VMC_ALL vmc_all;
extern VMC vmc[4];
extern GAIT_SHEC gait;
extern float dj_time[20];
void get_license(void);
void gimbal_control(float dt);
void VMC_DEMO(float dt);

void VMC_OLDX_TEST1(float dt);
void VMC_OLDX_TEST11(float dt);
void VMC_OLDX_TEST2(float dt);
void VMC_OLDX_TEST21(float dt);
void VMC_OLDX_TEST3(float dt);//�ڶ��Ȳ���
void VMC_OLDX_TEST4(float dt);//�ڶ��Ȳ��� ȫ��new
void VMC_OLDX_TEST41(float dt);//�ڶ��Ȳ��� ȫ��
void VMC_OLDX_TEST42(float dt);//�ڶ��Ȳ��� ȫ��
void VMC_OLDX_TEST5(float dt);//��̬����  ȫ��
void VMC_OLDX_TEST6(float dt);//ȫ��ĩ�˹̶�����
void  VMC_OLDX_TEST7(float dt);//��Ծģʽ

typedef struct {
	char state_m;
	char need_trig, en_fast_cog_move;
	char area_too_small;
	char cog_stable;
	float cog_stable_timer;
	char cog_tar_reach;
	char ground_num;
	char pre_trig_id, trig_id, trig_id_last;
	char trig_record_cnt;
	char trig_id_his[4];
	char xy_control_mode;
	float stable_value;
	float min_st_value;//�����ȶ���ֵ����
	float stable_bind_width;//֧���������ȶ��߽�
	float cog_reach_dead, cog_reach_deadnn;//���Ŀ�������
	float work_space_band;//�����ռ�߽�
	float stable_band;
	float work_space[4];
	char out_ws_flag[4];
	float att_com_off[2];
	float support_area;
	float min_support_area;
	float support_area_check;
	float tar_spd_length;
	float tar_spd_yaw;
	float sw_h_off_walke;
	END_POS cord_n;//ȫ���˶�����ϵ��λλ��
	END_POS now_cog_nn;//Ŀǰ֧��ƽ��ȫ������
	END_POS tar_zmp_nn;
	END_POS tar_zmp_n, tar_zmp_b;//���Ĳ���(����ϵ������)
	END_POS now_zmp_n, now_zmp_b;
	END_POS now_cog_n, now_cog_b;
	END_POS leg_move_per_trig;
	END_POS leg_off_move;
	END_POS now_st_cog_n, now_st_cog_b;//֧���������
	END_POS now_st_cog_n_reg, now_st_cog_b_reg;//֧���������
	END_POS now_st_cogspd_n, now_st_cogspd_b;//֧���������
	END_POS now_st_cog_n1, now_st_cog_b1;//֧���������
	END_POS walk_cmd_trig;
}_GAIT_WALK;
extern _GAIT_WALK walk_gait;

typedef struct {
	char state_m;
	char need_trig, en_fast_cog_move;
	char area_too_small;
	char cog_stable;
	float cog_stable_timer;
	char cog_tar_reach;
	char ground_num;
	char xy_control_mode;
	float stable_value;
	float min_st_value;//�����ȶ���ֵ����
	float stable_bind_width;//֧���������ȶ��߽�
	float cog_reach_dead, cog_reach_deadnn;//���Ŀ�������
	float work_space_band;//�����ռ�߽�
	float stable_band;
	float att_pit_gain;
	float Jump_T_SW;
	char trig_mode;
	char leg_force_lock[4];
	float back_scale;
	float climb_exp_att[3];
	float jump_force[3];
	float push_force[3];
	END_POS tar_zmp_nn;
	float counch_z;
	float push_back_w;
	END_POS climb_trig_blind1_b;
	END_POS climb_trig_blind2_b;

	END_POS climb_trig_gn[4];
	END_POS front_leg_fix_n, back_leg_fix_n;
	END_POS front_leg_catch_n;//λ��ģʽ
	float front_leg_catch_angle[3];//�Ƕ�ģʽ

	END_POS leg_fix_leg[4];

	char f_jump_state;
	char f_damp_state;
	char b_jump_state;
	float f_jump_x[3];
	float f_jump_z[4];
	float f_jump_dt[3];
	float b_jump_x[4];
	float b_jump_z[4];
	END_POS f_control, b_control;
	float tar_jump_pit;
	float jump_pit_kp, tar_jump_out;
	float front_catch_angle_spd;
	float acc_ground_thr;
	float f_ankle_spd_b;
	float f_ankle_spd_n[3];
	float jump_time;
	float tar_f_lift_spd_n[3];
	float f_lift_ground_spd;
	float f_td_ground_spd;
	float k_damp;
	float k_f_lift_ground_spd;
	float max_reach_angle;
	float com_x_move;
	char leg_control_mode[4];//
	float dj_delay;
	float jump_time_use;
	float jump_pluse_kp;
	char jump_front_lock;
	float reach_att_rate;
	float jump_angle_check;
	float jump_b_time;
	float sita_control;

	float f_bound_x[4];
	float f_bound_z[4];
	float b_bound_x[4];
	float b_bound_z[4];

	float push_force_up[3];
	float up_good_att_check;
	char step_num[2];

	float angle_f_up1[3];

	float angle_b_up1[3];
	float angle_f_up2[3];
	float angle_b_up2[3];
	float angle_f_up3[3];
	float angle_b_up3[3];

	char climb_sucess;
	float catch_angle_dead;
}_GAIT_CLIMB;

extern _GAIT_CLIMB climb_gait;


typedef struct {
	char state_m;
	char leg_force_lock[4];
	float climb_exp_att[3];
	float jump_force[3];
	float push_force[3];
	float push_back_wx[2];
	float push_back_wy[2];
	char xy_control_mode, trig_mode;
	END_POS leg_fix_leg[4];
	float sita_control;
	char leg_control_mode[4];
	float f_bound_x[4];
	float f_bound_z[4];
	float b_bound_x[4];
	float b_bound_z[4];

	float angle_f_up1[3];
	float angle_b_up1[3];
	float angle_f_up2[3];
	float angle_b_up2[3];
	float angle_f_up3[3];
	float angle_b_up3[3];
	float angle_f_up4[3];
	float angle_b_up4[3];
	float angle_f_up5[3];
	float angle_b_up5[3];
	float catch_angle_dead;
	END_POS end_crawlf, end_crawlh;
	float yaw_gain;
}_GAIT_CRAWL;

extern _GAIT_CRAWL crawl_gait;

typedef struct {
	char state_m, arieal_flag, xy_control_mode, leg_force_lock[4], leg_control_mode[4];
	END_POS climb_trig_gn[4];
	END_POS front_leg_fix_n, back_leg_fix_n;
	END_POS front_leg_catch_n;//λ��ģʽ
	float jump_force_gain[3];
	float jump_force_flt;
	float front_leg_catch_angle[3];//�Ƕ�ģʽ
	float att_pit_gain, k_damp, dj_delay, sita_control, sita_control_dead;
	float damp_time;
	float damp_time_scale;
	float jump_time;
	float damp_z;
	float jump_z;
	float tar_com_jump_h;
	float tar_com_h;
	float min_damp_z;
	float lift_acc_thr;
	float td_acc_thr;
	float max_lift_acc;
	float max_td_acc;
	END_POS com_slip_spd_now, td_spd, lift_spd, lift_spd_tar;
	END_POS com_slip_pos_tar, com_slip_pos_td, com_slip_pos_lift, com_slip_pos_damp;
	END_POS com_slip_spd_tar, com_slip_acc_tar;
	END_POS com_slip_pos_now;
	END_POS leg_fix_leg[4];
	float joint_qd_fp[4][3];
	float pos_gain;
	float jump_spd_off[2];
	END_POS trig_spd[4];
	float counch_z;
	float duty;
}_GAIT_PRONK;

extern _GAIT_PRONK pronk_gait;

typedef struct {
	char state_m[2], arieal_flag[2], xy_control_mode[2], leg_force_lock[4], leg_control_mode[4];
	float F_ALL[2][3], T_ALL[2][3];
	END_POS climb_trig_gn[4];
	END_POS front_leg_fix_n, back_leg_fix_n;
	END_POS front_leg_catch_n;//λ��ģʽ
	float jump_force_gain[4];
	float jump_force_flt;
	float front_leg_catch_angle[3];//�Ƕ�ģʽ
	float att_pit_gain, k_damp, dj_delay, sita_control, sita_control_dead;
	float damp_time[2];
	float damp_time_scale;
	float jump_time[2];
	float damp_z[2];
	float jump_z[2];
	float tar_com_jump_h;
	float tar_com_h;
	float min_damp_z;
	float lift_acc_thr;
	float td_acc_thr;
	float lift_att_thr;
	float max_lift_acc[2];
	float max_td_acc[2];
	END_POS com_slip_spd_now[2], td_spd[2], lift_spd[2], lift_spd_tar[2];
	END_POS com_slip_pos_tar[2], com_slip_pos_td[2], com_slip_pos_lift[2], com_slip_pos_damp[2];
	END_POS com_slip_spd_tar[2], com_slip_acc_tar[2];
	END_POS com_slip_pos_now[2];
	END_POS leg_fix_leg[4];
	float joint_qd_fp[4][3];
	float pos_gain;
	float jump_spd_off[2];
	END_POS trig_spd[4];
	float counch_z;
	float duty;
	char gait_phase;
}_GAIT_BOUND;

extern _GAIT_BOUND pronk_bound;

typedef struct {
	char sdk_connect;
	int sdk_loss_cnt;
	char sdk_mode;
	char gait_mode;
	char cmd_power;
	char trig_mode;
	float cmd_vx;
	float cmd_vy;
	float cmd_vz;
	float cmd_vyaw;
	float cmd_z;
	float cmd_pit;
	float cmd_rol;
	float cmd_yaw;
	int cmd_pwm[12];
	float cmd_angle[4][3];
	END_POS trig_end_cmd[4];
}_SDK;
extern _SDK sdk;

extern float side_press_safe_45[3];
extern float side_free_safe_45[3];
void Gait_Trot_Update_v1n(float dt);
void Gait_Trot_Update_v1(float dt);
void Gait_Trot_Update(float dt);
void Gait_Trot_Active(void);

void Gait_Stand_Update(float dt);
void Gait_Stand_Active(void);

void Gait_Walk_Test(float dt);
void Gait_Walk_Update(float dt);
void Gait_Walk_Update_nn(float dt);
void Gait_Walk_Active(void);

void Gait_Pace_Update(float dt);
void Gait_Pace_Active(void);
void Gait_Pace_Test(float dt);

void Gait_Gallop_Update(float dt);
void Gait_Gallop_Active(void);
void Gait_Gallop_Test(float dt);

void Gait_Pronk_Update(float dt);
void Gait_Pronk_Active(void);
void Gait_Pronk_Test(float dt);

void Gait_Bound_Update(float dt);
void Gait_Bound_Active(void);
void Gait_Bound_Test(float dt);

void Gait_Climb_Update(float dt);
void Gait_Climb_Active(void);
void Gait_Climb_Test(float dt);

void Gait_Crawl_Update(float dt);
void Gait_Crawl_Active(void);
void Gait_Crawl_Test(float dt);

void Gait_Recovery_Update(float dt);
void Gait_Recovery_Active(void);
void Gait_Recovery_Falling(float dt);

void vmc_init(void);
void vmc_param_init(void);
void vmc_param_reinit(void);
char power_task(float dt);
char power_task_d(float dt);
char estimate_end_state_d(VMC *in, float dt);
char estimate_end_state_new(VMC *in, float dt);
char inv_end_state_new(VMC *vmc, float x, float y, float z, float *sita1, float *sita2, float *sita3);
char cal_jacobi(VMC *in);
char cal_jacobi_d(VMC *in);
END_POS cal_pos_tar_from_curve(VMC *in, float dt);
void onboard_control(float dt);
void mode_switch(float dt);
void spd_planner(float dt);//�����ٶȿ���
float yaw_control(float dt);
void flat_ground_epos_planner(VMC* in);
char cal_jacobi_new(VMC *in);
void phase_gait_schedual_new(GAIT_SHEC* in, float dt);
void slip_planner(float dt);//������ģ��ǰ��
void control_dis(void);
void cal_torque_new(VMC *in);
void cal_force_deng(VMC *in, float dt);
extern int sign(float in);
char pos_flt_control(END_POS front_leg_fix_n, END_POS back_leg_fix_n, float fleg_spd, float hleg_spd, float dead, float dt);
char angle_flt_control(float angle_f_up[3], float angle_b_up[3], float fleg_spd, float hleg_spd, float dead, float dt);
char move_joint_to_pos(VMC * in, int joint, float tar_angle, float max_spd, float dt);
float converV_b_to_n_RT(float RT[3][3], float yaw, float xb, float yb, float zb, float *xn, float *yn, float *zn);
float converV_n_to_b_w_yaw(float yaw, float xn, float yn, float zn, float *xb, float *yb, float *zb);
void state_check(float dt);
char trig_curve(VMC *in, float *x, float *y, float *z, float dt, char sel);
char trig_curve_new(VMC *in, float *x, float *y, float *z, float dt, char sel);//ȫ�ֿ�����
void out_range_protect_new(void);
void cal_tar_end_pos(VMC *in);//luozu
void convert_mine_to_vmc_new(VMC *vmc);
void state_rst(float dt);
void convert_pos_n_to_leg(VMC* in, END_POS end_pos_n, END_POS* end_pos_leg, char mode, float dt);
char trig_curve_new(VMC *in, float *x, float *y, float *z, float dt, char sel);
void cal_curve_from_pos_new(VMC *in, END_POS t_pos, float desire_time);//ĩ�˹̶���ȫ������ϵ�µ�λ��
void convert_pos_n_to_leg_att(VMC* in, END_POS end_pos_n, END_POS* end_pos_leg, float pit, float rol, char mode, float dt);//ĩ�˹̶���ȫ������ϵ�µ�λ��
void leg_off_publish(void);
void cal_tar_end_pos_new(VMC *in);//ȫ�ֿ��� 
void phase_gait_schedual(GAIT_SHEC* in, float dt);//xiangxu
void event_gait_schedual(GAIT_SHEC* in, float dt);
extern float k_att_trig[2];
char check_lisence(void);
u8 inTrig(END_POS point, END_POS p1, END_POS p2, END_POS p3);
void line_function_from_two_point(float x1, float y1, float x2, float y2, float *k, float *b);
void line_function_from_arrow(float x, float y, float yaw, float *k, float *b);
void line_function90_from_arrow(float x, float y, float yaw, float *k, float *b);
u8 cross_point_of_lines(float k1, float b1, float k2, float b2, float *x, float *y);
float cal_area_trig(END_POS p1, END_POS p2, END_POS p3);
//���㵱ǰ��̬����
//���ڵ�ʸ������ǰ
char est_walk_statement(float dt);
void reset_st_torque_as_now(VMC *in, float torque_now[3]);
void reset_sw_torque_as_now(VMC *in, float torque_now[3]);
u8 check_point_front_arrow(END_POS point, END_POS vector_p, float yaw);
//�㵽ֱ�߾���
float dis_point_to_line(END_POS point, float k, float b);
void cal_tri_scale_point(END_POS p1, END_POS p2, END_POS p3, END_POS* p11, END_POS* p22, END_POS* p33, float scale);
float cal_steady_s3(END_POS point, END_POS p1, END_POS p2, END_POS p3);
float cal_steady_s4(END_POS point, END_POS p1, END_POS p2, END_POS p3, END_POS p4);
void reset_robot_statement(void);
u8 check_point_to_tangle(float x, float y, float yaw, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4
	, float *jiao1_x, float *jiao1_y, float *jiao2_x, float *jiao2_y);
u8 check_point_to_tangle_n(float x, float y, float yaw, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4
	, float *jiao1_x, float *jiao1_y, float *jiao2_x, float *jiao2_y);
//----------------------------VMC.lib �����˿�ͷ�ļ�-------------------------------
END_POS cal_quad_cog(END_POS a, END_POS b, END_POS c, END_POS d);
u8 check_point_front_arrow_n(END_POS point, END_POS vector_p, float yaw);
END_POS cal_tri_cog(END_POS a, END_POS b, END_POS c);
float cal_yaw_xy(float x, float y);
float cal_stable_area(void);
float cal_dis_of_points(float x1, float y1, float x2, float y2);//g
END_POS cal_quad_cog1(END_POS a, END_POS b, END_POS c, END_POS d);//g
END_POS cal_tri_cog1(END_POS a, END_POS b, END_POS c);//g
char point_is_right_line_with_arrow(END_POS point, float yaw_line, float k, float b);
char point_is_front_line_with_arrow(END_POS point, float yaw_90, float k, float b);
float cal_dis_point_line(END_POS point, float k, float b);
char check_leg_out_space(char leg, float chech_band, float *band_dis);
char estimate_end_state(VMC *in, float dt);
float cosd(double in);
float tand(double in);
float sind(float in);
void swap(float *a, float *b);
float dead(float x, float zoom);
void DigitalLPF(float in, float* out, float cutoff_freq, float dt);
float att_to_weight(float in, float dead, char mode, float max);
float fast_sqrt(float number);
float cal_bear(float x2, float  y2, float  x1, float  y1);//����1 �� 2�ĳ���
//ת��������ȫ�ֵ�����
float converV_n_to_b(float xn, float yn, float zn, float *xb, float *yb, float *zb);
float converV_n_to_b_RT(float RT[3][3], float yaw, float xn, float yn, float zn, float *xb, float *yb, float *zb);
float converV_n_to_b_w_yaw(float yaw, float xn, float yn, float zn, float *xb, float *yb, float *zb);
//ת�������ӻ��嵽��ؽ�
float converV_b_to_leg(char leg, float xb, float yb, float zb, float *xl, float *yl, float *zl);
//ת�������ӿ�ؽڵ�����
float converV_leg_to_b(char leg, float xl, float yl, float zl, float *xb, float *yb, float *zb);
//ת�������ӻ��嵽ȫ��
float converV_b_to_n(float xb, float yb, float zb, float *xn, float *yn, float *zn);
float converV_b_to_n_RT(float RT[3][3], float yaw, float xb, float yb, float zb, float *xn, float *yn, float *zn);
void force_n_to_b(VMC *in);
u8 inTrig2(END_POS point, END_POS p1, END_POS p2, END_POS p3, END_POS p4);
void param_check(void);
void estimate_ground_att(float dt);
extern float cof_off_all[2];
void trig_plan(char leg_sel_trig, float dt);
char trig_lift(char leg_sel_trig, float dt);
char trig_swing(char leg_sel_trig, float dt);
char trig_td(char leg_sel_trig, float dt);
void swing_spd_control(char leg_sel_trig, float dt);
void reset_tar_pos(char leg_sel_trig);
void trig_plan_n(char leg_sel_trig, float dt);
char trig_lift_n(char leg_sel_trig, float dt);
char trig_swing_n(char leg_sel_trig, float dt);
char trig_td_n(char leg_sel_trig, float dt);
void swing_spd_control_n(char leg_sel_trig, float dt);
extern char stand_force_enable_flag;
void control_dis_stand_init(void);
//-------------------------------SDK--------------------------
#define  MAX_CNT_NUM 35
extern int mission_sel_lock;
extern int mission_state;
extern u8 mission_flag;
void smart_control(float dt);

#define WAY_POINT_DEAD 0.2 //m
#define MISSION_CHECK_TIME 0.35//s
#define AUTO_HOME_POS_Z 4 //m	
#define LAND_SPD 0.68//m/s
#define MAX_WAYP_Z 100//m
#define WAY_POINT_DEAD1 0.5 //m
#define LAND_CHECK_G 0.25//g
#define LAND_CHECK_TIME 0.86//s
#define YAW_LIMIT_RATE 10//��
#define DRAW_TIME 5//s
//--------------------------------------------------------------
#define COMMON_INT 0
#define COMMON_CNT 1
#define COMMON_CNT1 2
#define COMMON_CNT2 3
#define SPD_MOVE_CNT 6
#define BODY_MOVE_INIT 7
#define BODY_MOVE_CNT 8
#define DRONE_Z_CNT 9
#define EST_INT 10
#define F_YAW_CNT 11
#define F_YAW_INIT 12
#define MISSION_CNT 13
#define PAN_SEARCH_FLAG 14
#define HOME_CNT 15
#define WAY_INIT 16
#define WAY_CNT 17
#define SET_POS_CNT 18
#define C_SEARCH_INT 19
#define D_DOWN_CNT 20
#define D_DOWN_INT 21
#define F_DOWN_CNT 22
#define F_DOWN_INT 23
#define DELAY_CNT 24
#define LAND_CNT 25
#define LAND_CNT1 26
#define LIGHT_DRAW_CNT1 27
#define LIGHT_DRAW_CNT2 28
#define LIGHT_DRAW_CNT3 29
#define C_SEARCH_T_INT 30
#define C_SEARCH_T_INT1 31
//-------------------------------------------------------------	
#define D_LEG 0
#define X_LEG 1
#define T_LEG 2
#define L 0
#define R 1
#define F 0
#define B 1
#define FL 0
#define BL 1
#define FL1 0
#define BL1 1
#define FL2 2
#define BL2 3
#define Xr 0
#define Yr 1
#define Zr 2
#define P 0
#define I 2
#define D 1
#define FB 3
#define IP 4
#define II 5
#define ID 6
#define PITr 0
#define ROLr 1
#define YAWr 2
#define YAWrr 3

#define MODE_SPD 1
#define MODE_POS 2
#define MODE_RAD 3
#define MODE_ATT 4
#define MODE_BODY 5
#define MODE_GLOBAL 6
#define MODE_ATT_YAW_ONLY 7
#define MODE_ATT_PR_ONLY 8
#define MODE_FAST_WAY 1
#define NMODE_FAST_WAY 0

#define RAD_TO_DEG 180/PI
#define DEG_TO_RAD PI/180
#define PI 3.14159267

#define OCU_TX_UART 0
#define OCU_TX_USB  1