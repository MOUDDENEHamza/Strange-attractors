#ifndef _CALCUL_H_
#define _CALCUL_H_

#include "struct.h"

/*calcul : initial speed dx dy dz*/
void initial_speed(double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, char flag[]);

/*calcul : speed at each moment t*/
void instant_speed(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, double *dt, char flag[]);

#endif
