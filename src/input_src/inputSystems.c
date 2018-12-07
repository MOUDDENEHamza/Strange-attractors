#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inputSystems.h"
#include "string.h"

/**************************************LORENZ SYSTEM**************************************/

//input initial coordinates of lorenz dynamic system.
void lorenz_coordinates(double position[]){

 	position[0] = 1;
	position[1] = 2;
	position[2] = 3;
          
	return;
}

//input constants of lorenz dynamic system.
void lorenz_constants(double parameter[], char by_default[]){
	
	if (strcmp(by_default,"yes") == 0){//automatic input : lorenz.
		parameter[0] = 10;
		parameter[1] = 28;
		parameter[2] = 2.66;
	}

	else{//manual input : euler.
		printf("\n---------------------Constants--------------------\n");
		printf("enter σ : ");
                scanf("%lf", &parameter[0]);
                printf("tenter ρ : ");
                scanf("%lf", &parameter[1]);
                printf("enter β : ");
                scanf("%lf", &parameter[2]);
                printf("------------------------------------------------------\n");
	}

	return;
}

/*****************************************************************************************/
/***************************************EULER SYSTEM**************************************/

//input initial coordinates of euler dynamic system.
void euler_coordinates(double position[]){

	position[0] = 0;
	position[1] = 2;

       return;
}

//input constants of euler dynamic system.
void euler_constants(double parameter[], char by_default[]){
	
	if (strcmp(by_default,"yes") == 0){//automatic input : euler.
		parameter[0] = 1;
		parameter[1] = 1;
		parameter[2] = 0.2;
		parameter[3] = 1;
	}

	else{//manual input : euler.
                printf("\n---------------------Constants--------------------\n");
                printf("enter g : ");
                scanf("%lf", &parameter[0]);
                printf("enter l : ");
                scanf("%lf", &parameter[1]);
                printf("enter γ : ");
                scanf("%lf", &parameter[2]);
                printf("enter m : ");
                scanf("%lf", &parameter[3]);
                printf("------------------------------------------------------\n");
	}

	return;
}

/*****************************************************************************************/
/****************************************AIZAWA SYSTEM************************************/

//input initial coordinates of aizawa dynamic system.
void aizawa_coordinates(double position[]){
        
	position[0] = 0.1;
	position[1] = 0;
	position[2] = 0;

	return;
}

//input constants of aizawa dynamic system.
void aizawa_constants(double parameter[], char by_default[]){
	
	if (strcmp(by_default,"yes") == 0){//automatic input : aizawa.
		parameter[0] = 0.95;
		parameter[1] = 0.7;
		parameter[2] = 0.6;
		parameter[3] = 3.5;
		parameter[4] = 0.25; 
		parameter[5] = 0.1;
	}

	else{//manual input : aizawa.
                printf("\n---------------------Constants--------------------\n");
                printf("enter a : ");
                scanf("%lf", &parameter[0]);
                printf("enter b : ");
                scanf("%lf", &parameter[1]);
                printf("enter c : ");
                scanf("%lf", &parameter[2]);
                printf("enter d : ");
                scanf("%lf", &parameter[3]);
                printf("enter e : ");
                scanf("%lf", &parameter[4]);
                printf("enter f : ");
                scanf("%lf", &parameter[5]);
                printf("------------------------------------------------------\n");
	}

	return;
}

/*****************************************************************************************/
/****************************************ANISHCHENKO SYSTEM*******************************/

//input initial coordinates of anishchenko system.
void anishchenko_coordinates(double position[]){
        
	position[0] = 1;
	position[1] = 2;
	position[2] = 3;

	return;
}

//input constants of anishchenko dynamic system.
void anishchenko_constants(double parameter[], char by_default[]){
	
	if (strcmp(by_default,"yes") == 0){//automatic input : anishchenko.
                        parameter[0] = 1.2;
                        parameter[1] = 0.5;
	}

	else{//manual input : anishchenko.
                printf("\n---------------------Constants--------------------\n");
                printf("enter µ : ");
                scanf("%lf", &parameter[0]);
                printf("enter η : ");
                scanf("%lf", &parameter[1]);
                printf("------------------------------------------------------\n");
	}

	return;
}

/*****************************************************************************************/
/****************************************HOOVER SYSTEM************************************/


//input initial coordinates of hoover system.
void hoover_coordinates(double position[]){

	position[0] = 1;
        position[1] = 2;
        position[2] = 3;

	return;
}

//input constants of anishchenko dynamic system.
void hoover_constants(double parameter[], char by_default[]){

        if (strcmp(by_default,"yes") == 0){//automatic input : hoover.
                        parameter[0] = 1.5;
        }

        else{//manual input : hoover.
                printf("\n---------------------Constants--------------------\n");
                printf("enter α : ");
                scanf("%lf", &parameter[0]);
                printf("------------------------------------------------------\n");
        }

        return;
}


/*****************************************************************************************/
/****************************************ROSSLER SYSTEM************************************/


//input initial coordinates of rossler system.
void rossler_coordinates(double position[]){

        position[0] = 1;
        position[1] = 2;
        position[2] = 3;

        return;
}

//input constants of rossler dynamic system.
void rossler_constants(double parameter[], char by_default[]){

        if (strcmp(by_default,"yes") == 0){//automatic input : rossler.
                        parameter[0] = 0.2;
			parameter[1] = 0.2;
			parameter[2] = 5.7;
        }

        else{//manual input : rossler.
                printf("\n---------------------Constants--------------------\n");
                printf("enter α : ");
                scanf("%lf", &parameter[0]);
		printf("enter β : ");
                scanf("%lf", &parameter[1]);
		printf("enter ζ : ");
                scanf("%lf", &parameter[2]);
                printf("------------------------------------------------------\n");
        }

        return;
}


/*****************************************************************************************/
/****************************************COULLET SYSTEM************************************/

//input initial coordinates of coullet system.
void coullet_coordinates(double position[]){

        position[0] = 0.1;
        position[1] = 0.2;
        position[2] = 0.3;

        return;
}

//input constants of coullet dynamic system.
void coullet_constants(double parameter[], char by_default[]){

        if (strcmp(by_default,"yes") == 0){//automatic input : coullet.
                        parameter[0] = 0.8;
                        parameter[1] = -1.1;
                        parameter[2] = -0.45;
			parameter[3] = -1;
        }

        else{//manual input : coullet.
                printf("\n---------------------Constants--------------------\n");
                printf("enter α : ");
                scanf("%lf", &parameter[0]);
                printf("enter β : ");
                scanf("%lf", &parameter[1]);
                printf("enter ζ : ");
                scanf("%lf", &parameter[2]);
		printf("enter δ : ");
                scanf("%lf", &parameter[3]);
                printf("------------------------------------------------------\n");
        }

        return;
}


/*****************************************************************************************/
/****************************************HADLEY SYSTEM************************************/

//input initial coordinates of hadley dynamic system.
void hadley_coordinates(double position[]){

	position[0] = 1;
	position[1] = 2;
	position[2] = 3;

	return;
}

//input constants of hadley dynamic system.
void hadley_constants(double parameter[], char by_default[]){

	if (strcmp(by_default,"yes") == 0){//automatic input : chenlee.
		parameter[0] = 0.2;
		parameter[1] = 4;
		parameter[2] = 8;
		parameter[3] = 1;
	}

	else{//manual input : chenlee.
		printf("\n---------------------Constants--------------------\n");
		printf("enter α : ");
		scanf("%lf", &parameter[0]);
		printf("enter β : ");
		scanf("%lf", &parameter[1]);
		printf("enter ζ : ");
		scanf("%lf", &parameter[2]);
		printf("enter δ : ");
		scanf("%lf", &parameter[3]);
		printf("------------------------------------------------------\n");
	}

	return;
}

/*****************************************************************************************/
