#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "input.h"
#include "inputSystems.h"

#define BUFFER 255
#define BLUE "\x1B[34m"
#define RED "\x1B[31m"
#define RESET "\x1B[0m"

/*the user has to choose between the differents dynamic systems*/
void type_flag(char flag[]) {
    char *ptr;

    while (1) {
        scanf("%s", flag);

	
	if(strtol(flag, &ptr, 10) < 1 || strtol(flag, &ptr, 10) > 10){
            //error : the flag  is integer smaller than 1 or greater than 10.
            printf("\n"RED"ERROR"RESET" : you have entered a integer smaller than 1 or greater than 10, you can only type an integer between 1 and 10, please try again.\n\nyou choose : ");
            continue;
        }

	if ((strcmp(flag, "1") < 0 || strcmp(flag, "9") > 0)){
            //error : the flag  is a string.
            printf("\n"RED"ERROR"RESET" : you have entered a string, you can only type an integer between 1 and 10, please try again.\n\nyou choose : ");
            continue;
        }
        return;
    }
}

/*ask user if he wants to execute the programm with default settings*/
void default_parameters(char by_default[]) {
    while (1) {
        /*the user can execute the programm with the default parameters*/
        printf("\nif you want to execute the programm with the default parameters type \x1B[32m'yes'\x1B[0m otherwise type \x1B[31m'no'\x1B[0m.\n\nyou choose : ");
        scanf("%s", by_default);

        if (strcmp(by_default, "yes") != 0 && strcmp(by_default, "no") != 0) {
            //error : the input  is incorrect.
            printf("\n"RED"ERROR"RESET" : you can only type 'yes' or 'no', please try again.\n");
            continue;
        }

        return;
    }
}

/*main loop : input of initial coordinates adapted of each dynamic system*/
void coordinates(double position[], char flag[], char by_default[]) {
    
    if (strcmp(by_default, "yes") == 0) {//automatic input of adapted dynamic system.

        if (strcmp(flag, "1") == 0) {//input of initial coordinates adapted to lorenz dynamic system.
            lorenz_coordinates(position);
        }

        if (strcmp(flag, "2") == 0) {//input of initial coordinates adapted to euler dynamic system.
            euler_coordinates(position);
        }

        if (strcmp(flag, "3") == 0) {//input of initial coordinates adapted to aizawa dynamic system.
            aizawa_coordinates(position);
        }

        if (strcmp(flag, "4") == 0) {//input of initial coordinates adapted to anishchenko dynamic system.
            anishchenko_coordinates(position);
        }

        if (strcmp(flag, "5") == 0) {//input of initial coordinates adapted to hoover dynamic system.
            hoover_coordinates(position);
        }

        if (strcmp(flag, "6") == 0) {//input of initial coordinates adapted to rossler dynamic system.
            rossler_coordinates(position);
        }

        if (strcmp(flag, "7") == 0) {//input of initial coordinates adapted to coullet dynamic system.
            coullet_coordinates(position);
        }


        if (strcmp(flag, "8") == 0) {//input of initial coordinates adapted to hadley dynamic system.
            hadley_coordinates(position);
        }

        if (strcmp(flag, "9") == 0) {//input of initial coordinates adapted to rayleigh dynamic system.
            rayleigh_coordinates(position);
        }

        if (strcmp(flag, "10") == 0) {//input of initial coordinates adapted to bouali dynamic system.
            bouali_coordinates(position);
        }
    }

    else {//manual input of adapted dynamic system.
	printf("\n--------------------"BLUE"COORDINATES"RESET"-----------------------\n");
        if (strcmp(flag, "2") != 0) {//manual input of 3D dynamic systems.
            printf("enter the coordinate x : ");
            scanf("%lf", &position[0]);
            printf("enter the coordinate y : ");
            scanf("%lf", &position[1]);
            printf("enter the coordinate z : ");
            scanf("%lf", &position[2]);
        } 
	
	else {//manual input : euler.
            printf("enter α : ");
            scanf("%lf", &position[0]);
            printf("enter β : ");
            scanf("%lf", &position[1]);
        }
	printf("------------------------------------------------------\n");
    }

	
    return;
}

/*input of the constants adapted of dynamic systems*/
void constants(double parameter[], char flag[], char by_default[]) {

    if (strcmp(flag, "1") == 0) {//input of constants adapted of lorenz dynamic system.
        lorenz_constants(parameter, by_default);
    }

    if (strcmp(flag, "2") == 0) {//input of constants adapted of euler dynamic system.
        euler_constants(parameter, by_default);
    }

    if (strcmp(flag, "3") == 0) {//input of constants adapted of aizawa dynamic system.
        aizawa_constants(parameter, by_default);
    }


    if (strcmp(flag, "4") == 0) {//input of constants adapted of anishchenko dynamic system.
        anishchenko_constants(parameter, by_default);
    }

    if (strcmp(flag, "5") == 0) {//input of constants adapted of hoover dynamic system.
        hoover_constants(parameter, by_default);
    }

    if (strcmp(flag, "6") == 0) {//input of constants adapted of hoover dynamic system.
        rossler_constants(parameter, by_default);
    }

    if (strcmp(flag, "7") == 0) {//input of constants adapted of coullet dynamic system.
        coullet_constants(parameter, by_default);
    }

    if (strcmp(flag, "8") == 0) {//input of constants adapted of hadley dynamic system.
        hadley_constants(parameter, by_default);
    }

    if (strcmp(flag, "9") == 0) {//input of initial coordinates adapted to rayleigh dynamic system.
        rayleigh_constants(parameter, by_default);
    }

    if (strcmp(flag, "10") == 0) {//input of initial coordinates adapted to bouali dynamic system.
        bouali_constants(parameter, by_default);
    }

    return;
}

/*input : ask user to enter the increment dt*/
void increment(double *dt, char by_default[]) {
    printf("\n------------------------"BLUE"TIME"RESET"--------------------------\n");

    if (strcmp(by_default, "yes") == 0) {//automatic input of the incremet dt
        *dt = 0.01;

        return;
    } else {//manual input of the incremet dt
        while (1) {
            printf("type the increment dt : ");
            scanf("%lf", dt);

            if (*dt <= 0) {/*error : the increment is none or negatif*/
                printf("\n"RED"ERROR"RESET" : the increment is not none or negatif, the increment is incorrect, please try again.\n\n");
                continue;
            }
	    
            return;
        }
    }
}

/*input : ask user to enter the break time Tmax*/
void break_time(double *tmax, double *dt, char by_default[]) {
    int i;
    char res[BUFFER];
    
    snprintf(res, 50, "%f", *tmax);
    if (strcmp(by_default, "yes") == 0) {//automatic input of the incremet dt
        *tmax = 100;

        return;
    } else {//manual input of the incremet dt
        while (1) {
            printf("type the break time Tmax : ");
            scanf("%lf", tmax);
	    	    
            if (*tmax <= *dt) {/*error : the break time is less than the increment dt*/
                printf("\n"RED"ERROR"RESET" : the break time is not small thant the increment dt, the break time is incorrect, please try again.\n\n");
                continue;
            }

		
    	    printf("------------------------------------------------------\n\n");

            return;
        }
    }
}
