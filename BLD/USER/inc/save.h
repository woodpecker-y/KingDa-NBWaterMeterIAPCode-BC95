/*********************************************************************************************************
//������
//���ߣ����ƮԾ    ʱ�䣺       �ص㣺
//CPU�ͺţ�         ϵͳ��Ƶ��
//�汾�ţ�V0.0        
*********************************************************************************************************/
#ifndef  __save_h
#define  __save_h
/*********************************************************************************************************
�ļ�������
*********************************************************************************************************/
#include "include.h"
/*********************************************************************************************************
�궨����
*********************************************************************************************************/
/*******************************************************************************************************
�ܽŶ���
***********************************************************************************************************/

/*********************************************************************************************************
�������Ͷ���
*********************************************************************************************************/
/*********************************************************************************************************
�ⲿ����������
*********************************************************************************************************/
/*********************************************************************************************************
����������
*********************************************************************************************************/
void WriteRom (unsigned short addr, void *pbuff, unsigned char length);
unsigned char Read_BootFlag(void);
void Save_BootFlag(unsigned char flag);
void Save_IP(unsigned char *IP,unsigned char Num);
void Read_Version(unsigned char *version);
void Save_Version(void);
unsigned char Sum_Check(unsigned char *sdata,unsigned short NUM);                //�����У��
void Read_ACUM_Flow(unsigned short addr,union flow_union *Flow);
void Save_Add_Flow(u16 addr,union flow_union *Flow);       //�洢�ۻ�ˮ��
void Save_SDCF_Flow(union flow_union *Flow);
void Save_Cal(enum Cal_State_En *Cal);       //�洢����״̬
void Read_BAT_Alarm_Value(void);     //��ȡ��ѹ�澯ֵ
void Save_BAT_Alarm_Value(void);     //�����ѹ�澯ֵ
void Read_Settle_Date(void);         //��ȡ��������
void Save_Settle_Date(void);         //�����������
void Read_Settle_Time(void);            //��ȡ�ս���ʱ��
void Save_Settle_Time(void);            //�����ս���ʱ��
void Read_Report_Cycle(void);        //��ȡ�ϱ�����
void Save_Report_Cycle(void);        //�����ϱ�����
void Read_Meter_Number(void);           //��ȡ����
void Save_Meter_Number(void);           //�������
/********************************************************************************************************/
#endif

/******************************************END********************************************************/