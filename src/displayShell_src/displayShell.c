#include <stdio.h>
#include "displayShell.h"

/*display : this function give to user the choice between several dynamic system*/
void launch_programm(){
	printf("******************************************************\n");
        printf("there are two dynamic system, to execute :\n");
        printf("Lorenz systeme type 1.\n");
        printf("Euler systeme type 2.\n");
        printf("you choose : ");
	return;
}

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(int *flag){
	if (*flag == 1){//init : Lorenz system
		printf("****************init : lorenz system***************************\n");
	}
	if (*flag == 2){//init : Euler system
		printf("****************init : euler system***************************\n");
	}
	return;
}

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], int *flag){
	if (*flag == 1){//display the initial speed of Lorenz systeme dx, dy, dz.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		printf("dz = %lf \n", speed[2]);
	} 	
	if (*flag == 2){//display the initial speed of Lorenz systeme dx, dy.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
	}
	return;
}

/*display : the coordinates that will be stored in choosen dynamic_system files*/
void display_coordinates(double position[], double *i, int *flag){
	if (*flag == 1){//print the coordinates of Lorenz system into the shell of time, x, y, z. 
		printf("time           x               y               z\n");
		printf("%lf     %lf      %lf      %lf\n", *i, position[0], position[1], position[2]);
	}
	if (*flag == 2){//print the coordinates of Lorenz system into the shell of time, α, β.	
	printf("time           α               β\n");
        printf("%lf     %lf      %lf\n", *i, position[0], position[1]);
	}
	return;
}

/*display : the end bar*/
void display_end(){
	printf("\nGoodbye!\n");
	printf("***************************end**********************************\n");
	return;
}
