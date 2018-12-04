#ifndef _INPUT_H_
#define _INPUT_H_

#include "struct.h"

/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[], int *flag);

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, int *flag);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);

#endif
