#include <stdio.h>
#include <math.h>
#include "euler.h"

/*calculation of initial speed*/
void initial_speed(double speed[], double position[], double *g, double *l, double *gamma, double *m){
	speed[0] = position[1];
	speed[1] = (-(*g)/(*l))*sin(position[0]) - ((*gamma)/(*m))*speed[0];
}

/*calculation of instant speed at every t */
void instant_speed(double speed_t[], double position[], double *g, double *l, double *gamma, double *m, double *dt){
	speed_t[0] = position[0] + position[1] * (*dt);
	speed_t[1] = position[1] + (( -(*g) / (*l)) * sin(position[0]) - ((*gamma) / (*m)) * position[1]) * (*dt);
	position[0] = speed_t[0];
	position[1] = speed_t[1];
}
