#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include <iostream>
#include <string.h>
//#incluce ""
using namespace std;

/*---------------MAX_Length_Define-----------*/
//URL����
#define MAX_URL_LENGTH   500
//���洢��֡��Ϣ
#define MAX_FRAME_NUM    10000
//���洢��Packet��Ϣ��һ���Դ�Ϊ׼���ؼ���
#define MAX_PACKET_NUM   10000


/*-----------------Error_Code----------------*/
#define Error_Url_Fromat_Wrong		    1001			/*��ַ��ʽ����*/
#define Error_Decode					1002			/*�������*/
#define Error_Register_ffmpeg			1003			/*ffmpegע��ʧ��*/
#define Rtsp_Stream_discontinue			1004			/*rtsp���ж�*/
#define Error_Push_Flow                 1005			/*�����쳣*/
#define Error_Encode					1006            /*�������*/