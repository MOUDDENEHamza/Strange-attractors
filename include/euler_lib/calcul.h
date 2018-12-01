#ifndef _CALCUL_H_
#define _CALCUL_H_

#include "structure.h"

void initial_speed(double speed[], double position[], double *g, double *l, double *gamma, double*m);


void instant_speed(double speed_t[], double position[], double *g, double *l, double *gamma, double *m, double *dt);


#endif
