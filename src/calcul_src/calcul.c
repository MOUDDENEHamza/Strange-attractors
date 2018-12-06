#include <stdio.h>
#include <math.h>
#include "calcul.h"
#include "string.h"

/*calculation of initial speed according to choosen dynamic system */
void initial_speed(double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, char flag[]){
	if (strcmp(flag,"1") == 0){//lorenz system
        speed[0] =(*sigma) * (position[1] - position[0]);
        speed[1] = position[0] * ((*rho) - position[2]) - position[1];
        speed[2] = position[0] * position[1] - (*beta) * position[2];
	}
	if (strcmp(flag,"2") == 0){//euler system
		speed[0] = position[1];
		speed[1] = (-(*g)/(*l))*sin(position[0]) - ((*gamma)/(*m))*speed[0];	
	}
	return;
}

/*calculation of instant speed according to choosen dynamic system */
void instant_speed(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, double *a, double *b, double *c, double *d, double *e, double *f, double *dt, char flag[]){
	if (strcmp(flag,"1") == 0){//lorenz system	
	speed_t[0] = position[0] + (*sigma) * (position[1] - position[0]) * (*dt);
        speed_t[1] = position[1] + (position[0] * ((*rho) - position[2]) - position[1]) * (*dt);
        speed_t[2] = position[2] + (position[0] * position[1] - (*beta) * position[2]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
	}
	if (strcmp(flag,"2") == 0){//euler system
		speed_t[0] = position[0] + position[1] * (*dt);
		speed_t[1] = position[1] + (( -(*g) / (*l)) * sin(position[0]) - ((*gamma) / (*m)) * position[1]) * (*dt);
		position[0] = speed_t[0];
		position[1] = speed_t[1];
	}
	if (strcmp(flag,"3") == 0){//Aizawa system
		speed_t[0] =position[0] + ((position[2] - (*b)) * position[0] -(*d) * position[1]) * (*dt);
                speed_t[1] =position[1] +  ((*d) * position[0] + (position[2] - (*b)) * position[1]) * (*dt);
                speed_t[2] =position[2] +  ((*c) + (*a) * position[2] - (pow(position[2], 3) / 3) - (pow(position[0], 2) + pow(position[1], 2)) * (1 + (*e) * position[2] )  + (*f) * pow(position[0], 3) * position[2]) * (*dt);

                position[0] = speed_t[0];
                position[1] = speed_t[1];
                position[2] = speed_t[2];
	}
	return;
}
