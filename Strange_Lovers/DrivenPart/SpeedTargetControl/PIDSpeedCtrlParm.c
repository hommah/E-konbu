#include "PIDSpeedCtrlParm.h"

void PSCP_init(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm){
	this_PIDSpeedCtrlParm->sKp = 1.25;
	this_PIDSpeedCtrlParm->sKi = 0.15;
	this_PIDSpeedCtrlParm->sKd = 0.0;
}

float PSCP_getSKp(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm){
	return this_PIDSpeedCtrlParm->sKp;
}

void PSCP_setSKp(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm,float parm){
	this_PIDSpeedCtrlParm->sKp = parm;
}

float PSCP_getSKi(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm){
	return this_PIDSpeedCtrlParm->sKi;
}

void PSCP_setSKi(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm,float parm){
	this_PIDSpeedCtrlParm->sKi = parm;
}

float PSCP_getSKd(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm){
	return this_PIDSpeedCtrlParm->sKd;
}

void PSCP_setSKd(PIDSpeedCtrlParm *this_PIDSpeedCtrlParm,float parm){
	this_PIDSpeedCtrlParm->sKd = parm;
}
