#ifndef _DYMAMICSYSTEMS_H_
#define _DYMAMICSYSTEMS_H_

#include "struct.h"

/**************************************LORENZ SYSTEM**************************************/

//calculation of initial speed of lorenz system
void lorenz_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of lorenz system
void lorenz_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/***************************************EULER SYSTEM**************************************/

//calculation of initial speed of euler system, the only 2D system
void euler_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of euler system, the only 2D system
void euler_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************AIZAWA SYSTEM************************************/

//calculation of initial speed of aizawa system
void aizawa_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of aizawa system
void aizawa_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************ANISHCHENKO SYSTEM*******************************/

//calculation of initial speed of anishchenko system
void anishchenko_init(double speed[], double position[], double parameter[]);

//calculation of initial speed of anishchenko system
void anishchenko_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************HOOVER SYSTEM************************************/

//calculation of initial speed of hoover system.
void hoover_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of hoover system.
void hoover_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************ROSSLER SYSTEM************************************/

//calculation of initial speed of rossler system.
void rossler_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of rossler system.
void rossler_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************COULLET SYSTEM************************************/

//calculation of initial speed of coullet system.
void coullet_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of coullet system.
void coullet_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************HADLEY SYSTEM************************************/

//calculation of initial speed of hadley system.
void hadley_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of hadley system.
void hadley_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************RAYLEIGH SYSTEM************************************/

//calculation of initial speed of rayleigh system.
void rayleigh_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of rayleigh system.
void rayleigh_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/
/****************************************THOMAS SYSTEM************************************/

//calculation of initial speed of thomas system.
void thomas_init(double speed[], double position[], double parameter[]);

//calculation of instant speed of thomas system.
void thomas_t(double speed_t[], double position[], double parameter[], double *dt);

/*****************************************************************************************/

#endif
