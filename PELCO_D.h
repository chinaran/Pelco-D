#pragma once
#include "BlmSerialComm.h"
#include <iostream>

class PELCO_D{
public:
	bool Init(int com);
	void Up();
	void Down();
	void Right();
	void Left();
	void Stop();
	void FocusNear();//����
	void FocusFar();
	void ZoomOut();//�䱶
	void ZoomIn();
	void ApertureLarge();//��Ȧ
	void ApertureSmall();
	bool Available();//�ж���̨�Ƿ����
	void SetSpeed(int speed);
	int  GetSpeed();
private:
	SerialComm comm;
	int speed;
};