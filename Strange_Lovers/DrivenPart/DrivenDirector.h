#ifndef DRIVENPART_DRIVEN_DIRECTOR_H
#define DRIVENPART_DRIVEN_DIRECTOR_H

#include "../DrivenPart/ControllerWegiht.h"
#include "../DrivenPart/PID_Brightness.h"
#include "../DrivenPart/Balancer.h"
#include "../DrivenPart/TargetCurvatureControl/CurvatureCtrl.h"


/**
 * �쓮�w����
 */
typedef struct{
	/**
	 * �g�p�����
	 */
ControllerWegiht use_controller;

}DrivenDirector;
	
	

void DrivenDirector_init(DrivenDirector *this_DrivenDirector);

/**
 * ����ʂ��v�Z����
 */
int DrivenDirector_calc_turn_val(DrivenDirector *this_DrivenDirector,int target_brightness, float target_curvature);

/**
 * �쓮�v��������
 */
void DrivenDirector_request_drive(DrivenDirector *this_DrivenDirector,int target_brightness, float target_curvature);


#endif
