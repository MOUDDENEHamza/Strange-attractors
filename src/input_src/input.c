#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "string.h"
#include "inputSystems.h"

/*the user has to choose between the different dynamic systeme*/
void type_flag(char flag[]){

	while(1){
		scanf("%s", flag);

		if( (strcmp(flag, "1") < 0 || strcmp(flag, "9") > 0) && strcmp(flag, "10") != 0){
			//error : the flag  is incorrect
			printf("error : you can type an integer between 1 et 10, please try again.\nyou choose : ");
			continue;
		}

		return;
	}
}

/*ask user if he wants to execute the programm with default settings*/
void default_parameters(char by_default[]){
	while(1){
		/*the user can execute the programm with the default parameters*/
		printf("\nif you want to execute the programm with the default parameters type 'yes' otherwise type 'no'.\n\nyou choose : ");
		scanf("%s", by_default);

		if (strcmp(by_default,"yes") != 0 && strcmp(by_default,"no") != 0){
			//error : the input  is incorrect.
			printf("error : the input is incorrect, please try again.\n");
			continue;
		}

		return;
	}
}


/*main loop : input of initial coordinates adapted of each dynamic system*/
void coordinates(double position[], char flag[], char by_default[]){

	if (strcmp(by_default,"yes") == 0){//automatic input of adapted dynamic system.

		if (strcmp(flag, "1") == 0){//input of initial coordinates adapted to lorenz dynamic system.
			lorenz_coordinates(position);	
		}

		if (strcmp(flag,"2") == 0){//input of initial coordinates adapted to euler dynamic system.
			euler_coordinates(position);
		}

		if (strcmp(flag, "3") == 0){//input of initial coordinates adapted to aizawa dynamic system.
			aizawa_coordinates(position);
		}

		if (strcmp(flag, "4") == 0){//input of initial coordinates adapted to anishchenko dynamic system.
			anishchenko_coordinates(position);
		}	

		if (strcmp(flag, "5") == 0){//input of initial coordinates adapted to hoover dynamic system.
			hoover_coordinates(position);
		}

		if (strcmp(flag, "6") == 0){//input of initial coordinates adapted to rossler dynamic system.
			rossler_coordinates(position);
		}

		if (strcmp(flag, "7") == 0){//input of initial coordinates adapted to coullet dynamic system.
			coullet_coordinates(position);
		}


		if (strcmp(flag, "8") == 0){//input of initial coordinates adapted to hadley dynamic system.
			hadley_coordinates(position);
		}

		if (strcmp(flag, "9") == 0){//input of initial coordinates adapted to rayleigh dynamic system.
			rayleigh_coordinates(position);
		}

		if (strcmp(flag, "10") == 0){//input of initial coordinates adapted to bouali dynamic system.
			bouali_coordinates(position);
		}
	}

	else{//manual input of adapted dynamic system.

		if (strcmp(flag, "2") != 0){//manual input of each 3D dynamic system.
			printf("\n----------------Coordinates--------------------\n");
			printf("enter the coordinate x : ");
			scanf("%lf", &position[0]);
			printf("enter the coordinate y : ");
			scanf("%lf", &position[1]);
			printf("enter the coordinate z : ");
			scanf("%lf", &position[2]);
			printf("------------------------------------------------\n");
		}

		else{//manual input : euler.
			printf("\n---------------------Coordinates--------------------\n");
			printf("enter α : ");
			scanf("%lf", &position[0]);
			printf("enter β : ");
			scanf("%lf", &position[1]);
			printf("------------------------------------------------------\n");
		}
	}

	return;
}

/*input of the constants adapted of each dynamic system*/
void constants(double parameter[], char flag[], char by_default[]){


	if (strcmp(flag,"1") == 0){//input of constants adapted of lorenz dynamic system.
		lorenz_constants(parameter, by_default);
	}	

	if (strcmp(flag,"2") == 0){//input of constants adapted of euler dynamic system.
		euler_constants(parameter, by_default); 
	}

	if (strcmp(flag,"3") == 0){//input of constants adapted of aizawa dynamic system.
		aizawa_constants(parameter, by_default);
	}


	if (strcmp(flag,"4") == 0){//input of constants adapted of anishchenko dynamic system.
		anishchenko_constants(parameter, by_default);
	}

	if (strcmp(flag,"5") == 0){//input of constants adapted of hoover dynamic system.
		hoover_constants(parameter, by_default);
	}

	if (strcmp(flag,"6") == 0){//input of constants adapted of hoover dynamic system.
		rossler_constants(parameter, by_default);
	}

	if (strcmp(flag,"7") == 0){//input of constants adapted of coullet dynamic system.
		coullet_constants(parameter, by_default);
	}

	if (strcmp(flag,"8") == 0){//input of constants adapted of hadley dynamic system.
		hadley_constants(parameter, by_default);
	}

	if (strcmp(flag, "9") == 0){//input of initial coordinates adapted to rayleigh dynamic system.	
		rayleigh_constants(parameter, by_default); 		
	}

	if (strcmp(flag, "10") == 0){//input of initial coordinates adapted to bouali dynamic system.
		bouali_constants(parameter, by_default);
	}

	return;
}

/*input : ask user to enter the increment dt*/
void increment(double *dt, char by_default[]){

	printf("\n---------------------time----------------------\n");

	if (strcmp(by_default, "yes") == 0){//automatic input of the incremet dt
		*dt = 0.01;

		return;
	}

	else{//manual input of the incremet dt
		while(1){
			printf("type the increment dt : ");
			scanf("%lf", dt);
			/*error : the increment is none or negatif*/

			if(*dt <= 0){
				printf("the increment is incorrect, please try again.\n");
				continue;
			}

			return;
		}
	}
}

/*input : ask user to enter the break time Tmax*/
void break_time(double *tmax, double *dt, char by_default[]){

	if (strcmp(by_default, "yes") == 0){//automatic input of the incremet dt
		*tmax = 100;

		return;
	}

	else{//manual input of the incremet dt
		while(1){
			printf("type the break time Tmax : ");
			scanf("%lf", tmax);
			/*error : the break time is less than the increment dt*/

			if(*tmax <= *dt){
				printf("the break time is incorrect, please try again.\n");
				continue;
			}

			printf("------------------------------------------------------\n\n");

			return;
		}
	}
}
