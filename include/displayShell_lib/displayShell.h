#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct.h"

void launch_programm();

/*display : the init bar with the dynamic system that will be used*/
void display_init(int *flag);

/*display : initial speed*/
void display_speed(double speed[], int *flag);

/*display : the coordinates that will be stored in lorenz.dat*/
void display_coordinates(double position[],double *i, int *flag);

/*display : the end bar*/
void display_end();

#endif
