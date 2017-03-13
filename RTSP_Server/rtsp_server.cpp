/**********************************
Description:  Rtsp_Server
Author:		  liyang
Date:         2016.11.07
***********************************/
#pragma once
#include "rtsp_server.h"
rtsp_server::rtsp_server(void)
{
}


rtsp_server::~rtsp_server(void)
{
	

}


// 初始化函数
int rtsp_server::Server_Init(void)
{
	return 0;
}



// 获取视频流
int rtsp_server::GetVideoStream(const char* FileAddr)
{
	return 0;
}


// 解码
int rtsp_server::Video_Decoder(void)
{
	return 0;
}


// 视频编码
int rtsp_server::Video_Encoder(void)
{
	return 0;
}


// 数据封装
int rtsp_server::Package_Data(void)
{
	return 0;
}
