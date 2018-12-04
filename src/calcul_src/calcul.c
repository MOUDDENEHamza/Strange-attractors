#include <stdio.h>
#include <math.h>
#include "calcul.h"

/*calcul : initial speed*/
void initial_speed(double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, int *flag){
	if (*flag == 1){
        speed[0] =(*sigma) * (position[1] - position[0]);
        speed[1] = position[0] * ((*rho) - position[2]) - position[1];
        speed[2] = position[0] * position[1] - (*beta) * position[2];
	return;
	}
	if (*flag == 2){
		speed[0] = position[1];
		speed[1] = (-(*g)/(*l))*sin(position[0]) - ((*gamma)/(*m))*speed[0];	
	}
}

/*calcul : speed at each moment t*/
void instant_speed(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, double *dt, int *flag){
	if (*flag == 1){	
	speed_t[0] = position[0] + (*sigma) * (position[1] - position[0]) * (*dt);
        speed_t[1] = position[1] + (position[0] * ((*rho) - position[2]) - position[1]) * (*dt);
        speed_t[2] = position[2] + (position[0] * position[1] - (*beta) * position[2]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
	return;
	}
	if (*flag == 2){
		speed_t[0] = position[0] + position[1] * (*dt);
		speed_t[1] = position[1] + (( -(*g) / (*l)) * sin(position[0]) - ((*gamma) / (*m)) * position[1]) * (*dt);
		position[0] = speed_t[0];
		position[1] = speed_t[1];
	}
}
