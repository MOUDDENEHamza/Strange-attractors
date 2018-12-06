#include <stdio.h>
#include "displayShell.h"
#include "string.h"

/*display : this function initialize and give to user the list of the dyanmic system that he can choose,then ask him to choose one*/
void launch_programm(){
	printf("\n******************************************************\n");
        printf("\nthere are four dynamic system, to execute :\n");
        printf("\n\tLorenz systeme type 1.\n");
        printf("\tEuler systeme type 2.\n");
	printf("\tAizawa systeme type 3.\n");
	printf("\tAnishchenko systeme type 4.\n");
        printf("\nyou choose : ");
	
	return;
}

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(char file_name[]){
	printf("\n****************init : %s system***************************\n", file_name);
	
	return;
}

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], char flag[]){
	if (strcmp(flag,"2") != 0){//display the initial speed of all 3D dynamic systeme dx, dy, dz.
		printf("\n-----------------------speed--------------------\n");
		printf("dx = %lf \n", speed[0]);
		printf("dy = %lf \n", speed[1]);
		printf("dz = %lf \n", speed[2]);
		printf("------------------------------------------------\n");
	} 	

	if (strcmp(flag,"2") == 0){//display the initial speed of Euler systeme dβ angular speed, dv linear speed.
		printf("dβ = %lf \n", speed[0]);
		printf("dv = %lf \n", speed[1]);
	}

	return;
}

/*display : display the coordinates directly in the shell*/
void display_coordinates(double position[], double *i, char flag[]){
	if (strcmp(flag,"2") != 0){//print the coordinates of 3D dynamic system into the shell : time, x, y, z. 
		printf("time \t\t x \t\t y \t\t z\n");
		printf("%lf \t %lf \t %lf \t %lf\n", *i, position[0], position[1], position[2]);
	}

	if (strcmp(flag,"2") == 0){//print the coordinates of Euler system into the shell of time, α, β.	
	printf("time \t\t α \t\t β\n");
        printf("%lf \t %lf \t %lf\n", *i, position[0], position[1]);
	}

	return;
}

/*display : the end bar*/
void display_end(){
	printf("\n\t\t\t Goodbye! \n");
	printf("***************************end**********************************\n");
	return;
}
