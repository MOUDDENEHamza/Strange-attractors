#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "struct.h"

/*display : this function initialize and give to user the list of the dyanmics systems that he can choose,then ask him to choose one*/
void launch_programm();

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(char file_name[]);

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], char flag[]);

/*display : display the coordinates directly into the shell*/
void display_coordinates(double position[],double *i, char flag[]);

/*display : the end bar*/
void display_end();

#endif
