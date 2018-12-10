#include <stdio.h>
#include <string.h>
#include "displayShell.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*display : this function initialize and give to user the list of the dynamic systems that he can choose,then ask him to choose one*/
void launch_programm() {

    printf("\n******************************************************\n");
    printf("\n\t"GREEN"MODEL THE TRAJECTORY OF A POINT"RESET"\t\n");
    printf("\n******************************************************\n");
    printf("\nthere are ten dynamic systems, to execute :\n");
    printf("\n\t"BLUE"the Lorenz attractor enter 1.\n");
    printf("\tthe Euler attractor enter 2.\n");
    printf("\tthe Aizawa attractor enter 3.\n");
    printf("\tthe Anishchenko - Astakhov attractor enter 4.\n");
    printf("\tthe Nose - Hoover atractor enter 5.\n");
    printf("\tthe Rossler atractor enter 6.\n");
    printf("\tthe coullet atractor enter 7.\n");
    printf("\tthe Hadley atractor enter 8.\n");
    printf("\tthe Rayleigh - Benard atractor enter 9.\n");
    printf("\tthe Bouali atractor enter 10."RESET"\n");
    printf("\nyou choose : ");

    return;
}

/*display : the init bar with the choosen dynamic system that will be used*/
void display_init(char file_name[]) {

    printf("\n****************"GREEN"INIT : %s SYSTEM"RESET"******************\n", file_name);

    return;
}

/*display : initial speed of the choosen dynamic system*/
void display_speed(double speed[], char flag[]) {

    printf("\n-----------------------"BLUE"SPEED"RESET"--------------------------\n");

    if (strcmp(flag, "2") != 0) {//display the initial speed of all 3D dynamic systems : dx, dy, dz.
        printf("dx = %lf \n", speed[0]);
        printf("dy = %lf \n", speed[1]);
        printf("dz = %lf \n", speed[2]);
    }

    if (strcmp(flag, "2") == 0) {//display the initial speed of Euler system : dβ angular speed, dv linear speed.
        printf("dβ = %lf \n", speed[0]);
        printf("dv = %lf \n", speed[1]);
    }

    printf("------------------------------------------------------\n");

    return;
}

/*display : display the coordinates directly into the shell*/
void display_coordinates(double position[], double *i, char flag[]) {
    if (strcmp(flag, "2") != 0) {//print the coordinates of 3D dynamics systems into the shell : time, x, y, z.
        printf("time \t\t x \t\t y \t\t z\n");
        printf("%lf \t %lf \t %lf \t %lf\n", *i, position[0], position[1], position[2]);
    }

    if (strcmp(flag, "2") == 0) {//print the coordinates of Euler system into the shell : time, α, β.
        printf("time \t\t α \t\t β\n");
        printf("%lf \t %lf \t %lf\n", *i, position[0], position[1]);
    }

    return;
}

/*display : the end bar*/
void display_end() {
    printf("\n\t\t     "BLUE"!GOODBYE!"RESET"\n");
    printf("\n************************"GREEN"END"RESET"***************************\n\n");
    return;
}
