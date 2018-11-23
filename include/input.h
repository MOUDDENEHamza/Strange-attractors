#ifndef _INPUT_H_
#define _INPUT_H_

/*input : coordonnees x, y, z*/
void coordinates(double position[]);

/*input : constantes σ, ρ, β*/ 
void  constants(double *sigma, double *rho, double *beta);

/*input : incrément*/
void increment(double *dt);

/*input : temps d'arret Tmax*/
void break_time(double *tmax, double *dt);

#endif
