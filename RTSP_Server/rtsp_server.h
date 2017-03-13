/**********************************
Description:  Rtsp_Server
Author:		  liyang
Date:         2016.11.07
***********************************/
#pragma once
#include "Error_code.h"

class rtsp_server
{
public:
	rtsp_server(void);
	~rtsp_server(void);

/*Data Struct*/
private:
	char URL[512];		//url路径
protected:
public:

/*Function*/
private:
protected:
public:
	// 初始化函数
	int Server_Init(void);
	// 获取视频流
	int GetVideoStream(const char* FileAddr);
	// 解码
	int Video_Decoder(void);
	// 视频编码
	int Video_Encoder(void);
	// 数据封装
	int Package_Data(void);
};

