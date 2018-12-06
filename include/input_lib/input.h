#ifndef _INPUT_H_
#define _INPUT_H_

#include "struct.h"

/*the user has to choice one systeme by typing 1(lorenz system) or 2(euler system)*/
void type_flag(char flag[]);

void default_parameters(char by_default[]);

/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[], char flag[], char by_default[]);

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, double *a, double *b, double *c, double *d,  double *e, double *f, char flag[], char by_default[]);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);

#endif
