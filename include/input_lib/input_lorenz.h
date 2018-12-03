#ifndef _INPUT_LORENZ_H_
#define _INPUT_LORENZ_H_

#include "struct_lorenz.h"

/*input : initial coordinates x, y, z*/
void coordinates(double position[]);

/*input : constants σ, ρ, β*/ 
void  constants(double *sigma, double *rho, double *beta);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);

#endif
