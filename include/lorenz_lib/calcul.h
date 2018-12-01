#ifndef _CALCUL_H_
#define _CALCUL_H_

#include "structure.h"

/*calcul : initial speed dx dy dz*/
void initial_speed(double speed[], double position[], double *sigma, double *rho, double *beta);

/*calcul : speed at each moment t*/
void instant_speed(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *dt);

#endif
