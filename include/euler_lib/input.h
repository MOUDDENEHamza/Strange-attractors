#ifndef _INPUT_H_
#define _INPUT_H_

#include "structure.h"

/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[]);

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *g, double *l, double *gamma, double *m);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);

#endif
