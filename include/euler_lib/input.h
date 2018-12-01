#ifndef _INPUT_H_
#define _INPUT_H_

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0
#include "structure.h"


/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[]);

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *g, double *l, double *gamma, double *m);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);
<<<<<<< HEAD
=======
=======

void constants(double *g, double *l, double *gamma, double *m);


void initial_coordinates(double position[]);


void time(double *tmax, double *dt);
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0


#endif
