#pragma once
#include <windows.h>
class SerialComm {   
public:   

	SerialComm(); 
	~SerialComm();   

	int open( char* lpszPortNum = "com1",    // ���ں�   
		DWORD  dwBaudRate  = CBR_2400,  // ������   
		BYTE   byParity    = NOPARITY,  // ��żУ��   
		BYTE   byStopBits  = ONESTOPBIT,// ֹͣλ����   
		BYTE   byByteSize  = 8 );       // �ֽڳ���   

	DWORD   output( LPCVOID pdata, DWORD len );   
	DWORD   input( LPVOID  pdest, DWORD len, DWORD dwMaxWait = 500 );   
	char*   GetErrorMessage( void );   
	void close();   
	bool isAvailable();
private:   
	VOID    ErrorToString( char* lpszMessage );   
	BOOL    IsNT( void );   
	char       m_lpszErrorMessage[256];   
	HANDLE      m_hCom;   // ���ھ��   
	OVERLAPPED  m_ov;     // �����첽�������������Ϣ�Ľṹ   
};   
