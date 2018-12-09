#ifndef _INPUT_H_
#define _INPUT_H_

#include "struct.h"

/*the user has to choose between the different dynamic systeme*/
void type_flag(char flag[]);

/*ask user if he wants to execute the programm with default settings*/
void default_parameters(char by_default[]);

/*input of initial coordinates adapted of each dynamic system*/
void coordinates(double position[], char flag[], char by_default[]);

/*input of the constants adapted of each dynamic system*/
void constants(double parameter[], char flag[], char by_default[]);

/*input : increment dt*/
void increment(double *dt, char by_default[]);

/*input : break time Tmax*/
void break_time(double *tmax, double *dt, char by_default[]);

#endif
