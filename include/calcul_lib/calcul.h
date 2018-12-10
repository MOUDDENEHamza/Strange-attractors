#ifndef _CALCUL_H_
#define _CALCUL_H_

#include "struct.h"

/*main loop of calculation of initial speed according to choosen dynamic system */
void initial_speed(double speed[], double position[], double parameter[], char flag[]);

/*main loop of calculation of instant speed according to choosen dynamic system */
void instant_speed(double speed_t[], double position[], double parameter[], double *dt, char flag[]);

#endif
