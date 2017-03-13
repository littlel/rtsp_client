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
	char URL[512];		//url·��
protected:
public:

/*Function*/
private:
protected:
public:
	// ��ʼ������
	int Server_Init(void);
	// ��ȡ��Ƶ��
	int GetVideoStream(const char* FileAddr);
	// ����
	int Video_Decoder(void);
	// ��Ƶ����
	int Video_Encoder(void);
	// ���ݷ�װ
	int Package_Data(void);
};

