/**********************************
���ߣ���Ƭ�����ֲ�
��վ��https://www.mcuclub.cn/
**********************************/


#ifndef __DS18B20_H__
#define __DS18B20_H__


/**********************************
����ͷ�ļ�
**********************************/
#include "main.h"


/**********************************
PIN�ڶ���
**********************************/
sbit DS18B20_DQ=P1^0;	 								//ds18b20��������


/**********************************
��������
**********************************/
void Ds18b20_Init(void);							//DS18B20��ʼ������
int Ds18b20_Read_Temp(void);					//��ȡ�¶�ֵ����


#endif
