
#include "CurvatureEncoder.h"
#include "DirectionEncoder.h"
#include "../Factory.h"

#define CYCLE_TIME 0.004
#define TARGTIME 100

#define MEASURE_TIME_CYCLE 1000 //[ms]
#define EXECUTE_CYCLE_TIME 4 //[ms]

void CurvatureEncoder_init(CurvatureEncoder *this_CurvatureEncoder)
{
	this_CurvatureEncoder->curvature = 0;
}

float CurvatureEncoder_get_curvature(CurvatureEncoder *this_CurvatureEncoder)
{
	this_CurvatureEncoder->curvature =CurvatureEncoder_calc_curvature(this_CurvatureEncoder);
	return this_CurvatureEncoder->curvature;
}

float CurvatureEncoder_calc_curvature(CurvatureEncoder *this_CurvatureEncoder)
{
	float theta=0;
	int distance=0;
	static float buf_theta=0;
	static int buf_distance=0;
	float curvature=0;
	static float curvature_store=0;
	static int bufTime =0;
	
	distance = DistanceEncoder_get_distance(&distanceEncoder); 
	theta = DirectionEncoder_get_direction(&directionEncoder);
	unsigned int time =  Timer_get_ms(&timer);


	if(!(theta == buf_theta)){
		curvature = rad2deg((distance - buf_distance)/ (theta - buf_theta));
	}
	else{
		curvature= 0.0;
	}
	curvature_store += curvature;

	if((time - bufTime) >= TARGTIME)
	{
		this_CurvatureEncoder->curvature = curvature_store/250; //25回分の平均を取ってる
		curvature_store = 0;
		bufTime = time;
	}

	buf_distance = distance;
	buf_theta= theta;
	logSend(0,0,curvature*100,distance,theta,this_CurvatureEncoder->curvature,0,0);

	return curvature;
	//return (int)this_CurvatureEncoder->curvature;
}

