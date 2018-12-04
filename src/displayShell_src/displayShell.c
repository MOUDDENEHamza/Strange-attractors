#include <stdio.h>
#include "displayShell.h"

void launch_programm(){
	printf("******************************************************\n");
        printf("there are two dynamic system, to execute :\n");
        printf("to launch Lorenz systeme type 1.\n");
        printf("to launch Euler systeme type 2.\n");
        printf("you choose : ");
	return;
}

/*display : the init bar with the dynamic system that will be used*/
void display_init(int *flag){
	if (*flag == 1){
		printf("****************init : lorenz system***************************\n");
		return;
	}
	if (*flag == 2){
		printf("****************init : euler system***************************\n");
		return;
	}
}

/*display : initial speed*/
void display_speed(double speed[], int *flag){
	if (*flag == 1){
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		printf("dz = %lf \n", speed[2]);
		return;
	} 	
	if (*flag == 2){
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		return;
	}
}

/*display : the coordinates that will be stored in lorenz.dat*/
void display_coordinates(double position[], double *i, int *flag){
	if (*flag == 1){
		printf("time           x               y               z\n");
		printf("%lf     %lf      %lf      %lf\n", *i, position[0], position[1], position[2]);
		return;
	}
	if (*flag == 2){	
	printf("time           x               y\n");
        printf("%lf     %lf      %lf\n", *i, position[0], position[1]);
	return;
	}
}

/*display : the end bar*/
void display_end(){
	printf("***************************end**********************************\n");
	return;
}
