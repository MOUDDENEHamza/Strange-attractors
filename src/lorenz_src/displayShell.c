#include <stdio.h>
#include "displayShell.h"

/*display : the init bar with the dynamic system that will be used*/
void display_init(){
	printf("****************init : lorenz system***************************\n");
	return;
}

/*display : initial speed*/
void display_speed(double speed[]){
	printf("dx = %lf \n", speed[0]);
        printf("dy = %lf \n", speed[1]);
        printf("dz = %lf \n", speed[2]);
	return;
}

/*display : the coordinates that will be stored in lorenz.dat*/
void display_coordinates(double position[], double *i){
	printf("time           x               y               z\n");
        printf("%lf     %lf      %lf      %lf\n", *i, position[0], position[1], position[2]);
	return;
}

/*display : the end bar*/
void display_end(){
	printf("***************************end**********************************\n");
	return;
}
