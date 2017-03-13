#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include <iostream>
#include <string.h>
//#incluce ""
using namespace std;

/*---------------MAX_Length_Define-----------*/
//URL长度
#define MAX_URL_LENGTH   500
//最多存储的帧信息
#define MAX_FRAME_NUM    10000
//最多存储的Packet信息（一般以此为准，关键）
#define MAX_PACKET_NUM   10000


/*-----------------Error_Code----------------*/
#define Error_Url_Fromat_Wrong		    1001			/*地址格式错误*/
#define Error_Decode					1002			/*解码错误*/
#define Error_Register_ffmpeg			1003			/*ffmpeg注册失败*/
#define Rtsp_Stream_discontinue			1004			/*rtsp流中断*/
#define Error_Push_Flow                 1005			/*推流异常*/
#define Error_Encode					1006            /*编码错误*/