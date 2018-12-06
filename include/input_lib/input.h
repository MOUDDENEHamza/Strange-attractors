#ifndef _INPUT_H_
#define _INPUT_H_

#include "struct.h"

/**************************************LORENZ SYSTEM**************************************/

//input initial coordinates of lorenz dynamic system.
void lorenz_coordinates(double position[], char by_default[]);

//input constants of lorenz dynamic system.
void lorenz_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/***************************************EULER SYSTEM**************************************/

//input initial coordinates of euler dynamic system.
void euler_coordinates(double position[], char by_default[]);

//input constants of euler dynamic system.
void euler_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************AIZAWA SYSTEM************************************/

//input initial coordinates of aizawa dynamic system.
void aizawa_coordinates(double position[], char by_default[]);

//input constants of aizawa dynamic system.
void aizawa_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************ANISHCHENKO SYSTEM*******************************/

//input initial coordinates of anishchenko system.
void anishchenko_coordinates(double position[], char by_default[]);

//input constants of anishchenko dynamic system.
void anishchenko_constants(double parameter[], char by_default[]);


/*****************************************************************************************/


/*the user has to choose between the different dynamic systeme*/
void type_flag(char flag[]);

/*ask user if he wants to execute the programm with default settings*/
void default_parameters(char by_default[]);

/*input of initial coordinates adapted of each dynamic system*/
void coordinates(double position[], char flag[], char by_default[]);

/*input of the constants adapted of each dynamic system*/
void constants(double parameter[], char flag[], char by_default[]);

/*input : increment dt*/
void increment(double *dt);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt);

#endif
