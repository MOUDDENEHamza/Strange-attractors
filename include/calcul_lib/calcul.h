#ifndef _CALCUL_H_
#define _CALCUL_H_

#include "struct.h"

/*calculation of intialal speed according to choosen dynamic system, for example:lorenz system has dx
,dy,dz*/
void initial_speed(double speed[], double position[], double parameter[], char flag[]);


/*calcul : speed at each moment t*/
void instant_speed(double speed_t[], double speed[], double position[], double parameter[],  double *dt, char flag[]);

#endif
