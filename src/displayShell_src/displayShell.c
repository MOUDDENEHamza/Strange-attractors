#include <stdio.h>
#include "displayShell.h"
#include "string.h"

/*display : this function give to user the choice between several dynamic system*/
void launch_programm(){
	printf("******************************************************\n");
        printf("there are two dynamic system, to execute :\n");
        printf("Lorenz systeme type 1.\n");
        printf("Euler systeme type 2.\n");
	printf("Aizawa systeme type 3.\n");
        printf("you choose : ");
	return;
}

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(char flag[]){
	if (strcmp(flag,"1") == 0){//init : Lorenz system
		printf("****************init : LORENZ system***************************\n");
	}
	if (strcmp(flag,"2") == 0){//init : Euler system
		printf("****************init : EULER system***************************\n");
	}
	if (strcmp(flag,"3") == 0){//init : Euler system
                printf("****************init : AIZAWA system***************************\n");
        }
	return;
}

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], char flag[]){
	if (strcmp(flag,"1") == 0){//display the initial speed of Lorenz systeme dx, dy, dz.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		printf("dz = %lf \n", speed[2]);
	} 	
	if (strcmp(flag,"2") == 0){//display the initial speed of Lorenz systeme dx, dy.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
	}
	return;
}

/*display : the coordinates that will be stored in choosen dynamic_system files*/
void display_coordinates(double position[], double *i, char flag[]){
	if (strcmp(flag,"1") == 0 || strcmp(flag,"3") == 0){//print the coordinates of Lorenz system into the shell of time, x, y, z. 
		printf("time           x               y               z\n");
		printf("%lf     %lf      %lf      %lf\n", *i, position[0], position[1], position[2]);
	}
	if (strcmp(flag,"2") == 0){//print the coordinates of Lorenz system into the shell of time, α, β.	
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
