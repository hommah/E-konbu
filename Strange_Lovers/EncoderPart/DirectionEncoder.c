
#include "DirectionEncoder.h"
#include "../Factory.h"

#define CYCLE_TIME 0.004
#define TARGTIME 100


void DirectionEncoder_init(DirectionEncoder *this_DirectionEncoder)
{
	this_DirectionEncoder->direction = 0;
}

float DirectionEncoder_get_direction(DirectionEncoder *this_DirectionEncoder)
{
	return this_DirectionEncoder->direction;
}

void DirectionEncoder_calc_speed(DirectionEncoder *this_DirectionEncoder)
{
	int revL = WheelMotor_get_count(&leftWheelMotor);

	int revR = WheelMotor_get_count(&rightWheelMotor);	

	this_DirectionEncoder->direction = (float)WHEEL_R /MACHINE_W * (revR - revL);
}


