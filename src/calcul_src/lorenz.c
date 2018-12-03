#include <stdio.h>
#include "lorenz.h"

/*calcul : initial speed*/
void initial_speed(double speed[], double position[], double *sigma, double *rho, double *beta){
        speed[0] =(*sigma) * (position[1] - position[0]);
        speed[1] = position[0] * ((*rho) - position[2]) - position[1];
        speed[2] = position[0] * position[1] - (*beta) * position[2];
	return;
}

/*calcul : speed at each moment t*/
void instant_speed(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *dt){
	speed_t[0] = position[0] + (*sigma) * (position[1] - position[0]) * (*dt);
        speed_t[1] = position[1] + (position[0] * ((*rho) - position[2]) - position[1]) * (*dt);
        speed_t[2] = position[2] + (position[0] * position[1] - (*beta) * position[2]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
	return;
}
