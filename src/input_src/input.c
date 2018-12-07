#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "string.h"

/**************************************LORENZ SYSTEM**************************************/

//input initial coordinates of lorenz dynamic system.
void lorenz_coordinates(double position[], char by_default[]){

	if (strcmp(by_default, "yes") == 0){//automatic input : lorenz.
 		position[0] = 1;
		position[1] = 2;
		position[2] = 3;
	}

	else{//manual input : lorenz.
		printf("\n----------------Coordinates--------------------\n");
		printf("enter the coordinate x : ");
		scanf("%lf", &position[0]);
		printf("enter the coordinate y : ");
		scanf("%lf", &position[1]);
		printf("enter the coordinate z : ");
		scanf("%lf", &position[2]);
		printf("------------------------------------------------\n");
                }

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
void euler_coordinates(double position[], char by_default[]){

 	if (strcmp(by_default,"yes") == 0){//automatic input : euler.
		position[0] = 0;
		position[1] = 2;
       }

       else{//manual input : euler.
	       printf("\n---------------------Coordinates--------------------\n");
	       printf("enter α : ");
	       scanf("%lf", &position[0]);
	       printf("enter β : ");
	       scanf("%lf", &position[1]);
	       printf("------------------------------------------------------\n");
       }

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
void aizawa_coordinates(double position[], char by_default[]){
        
	if (strcmp(by_default,"yes") == 0){//automatic input : aizawa.
		position[0] = 0.1;
		position[1] = 0;
		position[2] = 0;
	}

	else{//manual input : aizawa.
		printf("\n---------------------Coordinates--------------------\n");
		printf("enter the coordinate x : ");
		scanf("%lf", &position[0]);
		printf("enter the coordinate y : ");
		scanf("%lf", &position[1]);
		printf("enter the coordinate z : ");
		scanf("%lf", &position[2]);
		printf("------------------------------------------------------\n");
	}

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
void anishchenko_coordinates(double position[], char by_default[]){
        
	if (strcmp(by_default,"yes") == 0){//automatic input : anishchenko.
		position[0] = 1;
		position[1] = 2;
		position[2] = 3;
	}

	else{//manual input : anishchenko.
		printf("\n---------------------Coordinates--------------------\n");
		printf("enter the coordinate x : ");
		scanf("%lf", &position[0]);
		printf("enter the coordinate y : ");
		scanf("%lf", &position[1]);
		printf("enter the coordinate z : ");
		scanf("%lf", &position[2]);
		printf("------------------------------------------------------\n");
	}

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
void hoover_coordinates(double position[], char by_default[]){
	
	if (strcmp(by_default,"yes") == 0){//automatic input : hoover.
                position[0] = 1;
                position[1] = 2;
                position[2] = 3;
        }

        else{//manual input : hoover.
                printf("\n---------------------Coordinates--------------------\n");
                printf("enter the coordinate x : ");
                scanf("%lf", &position[0]);
                printf("enter the coordinate y : ");
                scanf("%lf", &position[1]);
                printf("enter the coordinate z : ");
                scanf("%lf", &position[2]);
                printf("------------------------------------------------------\n");
        }
	
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
void rossler_coordinates(double position[], char by_default[]){

        if (strcmp(by_default,"yes") == 0){//automatic input : rossler.
                position[0] = 1;
                position[1] = 2;
                position[2] = 3;
        }

        else{//manual input : rossler.
                printf("\n---------------------Coordinates--------------------\n");
                printf("enter the coordinate x : ");
                scanf("%lf", &position[0]);
                printf("enter the coordinate y : ");
                scanf("%lf", &position[1]);
                printf("enter the coordinate z : ");
                scanf("%lf", &position[2]);
                printf("------------------------------------------------------\n");
        }

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
void coullet_coordinates(double position[], char by_default[]){

        if (strcmp(by_default,"yes") == 0){//automatic input : coullet.
                position[0] = 0.1;
                position[1] = 0.2;
                position[2] = 0.3;
        }

        else{//manual input : coullet.
                printf("\n---------------------Coordinates--------------------\n");
                printf("enter the coordinate x : ");
                scanf("%lf", &position[0]);
                printf("enter the coordinate y : ");
                scanf("%lf", &position[1]);
                printf("enter the coordinate z : ");
                scanf("%lf", &position[2]);
                printf("------------------------------------------------------\n");
        }

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


/*the user has to choose between the different dynamic systeme*/
void type_flag(char flag[]){
	while(1){
                scanf("%s", flag);
                
		if( strcmp(flag, "1") < 0 || strcmp(flag, "7") > 0){
			//error : the flag  is incorrect
                        printf("error : you can type an integer between 1 et 7, please try again.\nyou choose : ");
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
		 
	if (strcmp(flag, "1") == 0){//input of initial coordinates adapted to lorenz dynamic system.
		lorenz_coordinates(position, by_default);	
	}
	
	if (strcmp(flag,"2") == 0){//input of initial coordinates adapted to euler dynamic system.
		euler_coordinates(position, by_default);
        }


	if (strcmp(flag, "3") == 0){//input of initial coordinates adapted to aizawa dynamic system.
		aizawa_coordinates(position, by_default);
	}
		
	if (strcmp(flag, "4") == 0){//input of initial coordinates adapted to anishchenko dynamic system.
		anishchenko_coordinates(position, by_default);
	}	

	if (strcmp(flag, "5") == 0){//input of initial coordinates adapted to hoover dynamic system.
                hoover_coordinates(position, by_default);
        }
	
	if (strcmp(flag, "6") == 0){//input of initial coordinates adapted to rossler dynamic system.
                rossler_coordinates(position, by_default);
        }
	
	if (strcmp(flag, "7") == 0){//input of initial coordinates adapted to coullet dynamic system.
                coullet_coordinates(position, by_default);
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

	return;
}

/*input : ask user to enter the increment dt*/
void increment(double *dt){
        printf("\n---------------------time----------------------\n");

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

/*input : ask user to enter the break time Tmax*/
void break_time(double *tmax, double *dt){
        
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
