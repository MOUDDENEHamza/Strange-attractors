#include <stdio.h>
#include "displayShell.h"
#include "string.h"

/*display : this function give to user the choice between several dynamic system*/
void launch_programm(){
	printf("\n******************************************************\n");
        printf("\nthere are two dynamic system, to execute :\n");
        printf("\n\tLorenz systeme type 1.\n");
        printf("\tEuler systeme type 2.\n");
	printf("\tAizawa systeme type 3.\n");
	printf("\tAnishchenko systeme type 4.\n");
        printf("\nyou choose : ");
	return;
}

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(char flag[]){
	if (strcmp(flag,"1") == 0){//init : Lorenz system
		printf("\n****************init : LORENZ system***************************\n");
	}
	if (strcmp(flag,"2") == 0){//init : Euler system
		printf("\n****************init : EULER system***************************\n");
	}
	if (strcmp(flag,"3") == 0){//init : Aizawa system
                printf("\n****************init : AIZAWA system***************************\n");
	}
	if (strcmp(flag,"4") == 0){//init : Anishchenko system
		printf("\n****************init : ANISHCHENKO system***************************\n");
					        }
	return;
}

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], char flag[]){
	if (strcmp(flag,"2") != 0){//display the initial speed of all 3D dynamic systeme dx, dy, dz.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		printf("dz = %lf \n", speed[2]);
	} 	
	if (strcmp(flag,"2") == 0){//display the initial speed of Euler systeme dx, dy.
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
	}
	return;
}

/*display : the coordinates that will be stored in choosen dynamic_system files*/
void display_coordinates(double position[], double *i, char flag[]){
	if (strcmp(flag,"2") != 0){//print the coordinates of 3D dynamic system into the shell of time, x, y, z. 
		printf("time           x               y               z\n");
		printf("%lf     %lf      %lf      %lf\n", *i, position[0], position[1], position[2]);
	}
	if (strcmp(flag,"2") == 0){//print the coordinates of Euler system into the shell of time, α, β.	
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
