#include "PIDCurvatureCtrlParm.h"

void PCCP_init(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm)
{
	this_PIDCurvatureCtrlParm->cKp = 80.0;
	
	//this_PIDCurvatureCtrlParm->cKp = 1.85;
	//this_PIDCurvatureCtrlParm->cKi = 0.003;
	//this_PIDCurvatureCtrlParm->cKd = 0.00003;
}

float PCCP_getCKp(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm)
{
	return this_PIDCurvatureCtrlParm->cKp;
}

void PCCP_setCKp(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm,float parm)
{
	this_PIDCurvatureCtrlParm->cKp = parm;
}

float PCCP_getCKi(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm)
{
	return this_PIDCurvatureCtrlParm->cKi;
}

void PCCP_setCKi(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm,float parm)
{
	this_PIDCurvatureCtrlParm->cKi = parm;
}

float PCCP_getCKd(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm)
{
	return this_PIDCurvatureCtrlParm->cKd;
}

void PCCP_setCKd(PIDCurvatureCtrlParm *this_PIDCurvatureCtrlParm,float parm)
{
	this_PIDCurvatureCtrlParm->cKd = parm;
}
