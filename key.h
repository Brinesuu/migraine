/**********************************
���ߣ���Ƭ�����ֲ�
��վ��https://www.mcuclub.cn/
**********************************/


#ifndef _KEY_H_
#define _KEY_H_


/**********************************
����ͷ�ļ�
**********************************/
#include "main.h"


/**********************************
PIN�ڶ���
**********************************/
sbit KEY1=P2^2;																		//��������KEY1����
sbit KEY2=P2^3;																		//��������KEY2����
sbit KEY3=P2^4;																		//��������KEY3����


/**********************************
��������
**********************************/
uchar Chiclet_Keyboard_Scan(uchar key_mode);			//��������ɨ�躯��


#endif
