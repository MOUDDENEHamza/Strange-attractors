#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct_euler.h"

/*display : the init bar with the dynamic system that will be used*/
void display_init();

/*display : initial speed*/
void display_speed(double speed[]);

/*display : the coordinates that will be stored in lorenz.dat*/
void display_coordinates(double position[],double *i);

/*display : the end bar*/
void display_end();

#endif
