#ifndef _EULER_H_
#define _EULER_H_

#include "struct_euler.h"

void initial_speed(double speed[], double position[], double *g, double *l, double *gamma, double*m);


void instant_speed(double speed_t[], double position[], double *g, double *l, double *gamma, double *m, double *dt);


#endif
