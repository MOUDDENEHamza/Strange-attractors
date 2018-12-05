#include <stdio.h>
#include <string.h>
#include "input.h"
#include "string.h"

/*the user has to choose between dynamic systeme by typing 1(lorenz system) or 2(euler system)*/
void type_flag(char flag[]){
	while(1){
                scanf("%s", flag);
                /*error : the flag  is incorrect*/
                if(strcmp(flag,"1") != 0 && strcmp(flag,"2") != 0){
                        printf("error : you can type only 1 or 2, please try again.\nyou choose : ");
                        continue;
                }
                return;
        }
}

/*ask user if he wants to execute the programm with default setting*/
void default_parameters(char by_default[]){
	while(1){
		/*the user can execute the programm with the default parameters*/
        	printf("if you want to execute the programm with the default parameters type 'yes' otherwise type 'no'.\nyou choose : ");
        	scanf("%s", by_default);
		if (strcmp(by_default,"yes") != 0 && strcmp(by_default,"no") != 0){
		        printf("error : the input is incorrect, please try again.\n");
                        continue;
                }
		return;
	}
}


/*input : initial coordinates; α is the pendulum tilt angle, β is the angular speed*/
void coordinates(double position[], char flag[], char by_default[]){
	if (strcmp(flag,"1") == 0){
		if (strcmp(by_default,"yes") == 0){
			position[0] = 1;
			position[1] = 2;
			position[2] = 3;
		}
		else{
			printf("type the coordinate x : ");
			scanf("%lf", &position[0]);
			printf("type the coordinate y : ");
			scanf("%lf", &position[1]);
			printf("type the coordinate z : ");
			scanf("%lf", &position[2]);
		}
	}	
	if (strcmp(flag,"2") == 0){ 
	 	if (strcmp(by_default,"yes") == 0){
                        position[0] = 0;
                        position[1] = 2;
                }
                else{	
		printf("enter α : ");
		scanf("%lf", &position[0]);
		printf("enter β : ");
		scanf("%lf", &position[1]);
		}
	}
	return;
}

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, char flag[], char by_default[]){
	if (strcmp(flag,"1") == 0){
		if (strcmp(by_default,"yes") == 0){
                        *sigma = 10;
                        *rho = 28;
                        *beta = 2.66;
                }
                else{
		printf("type σ : ");
		scanf("%lf", sigma);
		printf("type ρ : ");
		scanf("%lf", rho);
		printf("type β : ");
		scanf("%lf", beta);	
		}
	}	
	if (strcmp(flag,"2") == 0){ 
		if (strcmp(by_default,"yes") == 0){
                        *g = 1;
                        *l = 1;
                        *gamma = 0.2;
			*m = 1;
                }
		else{	
		printf("enter g : ");
		scanf("%lf", g);
		printf("enter l : ");
		scanf("%lf", l);
		printf("enter γ : ");
		scanf("%lf", gamma);
		printf("enter m : ");
		scanf("%lf", m);
		}
	}
	return;
}

/*input : ask user to enter the increment dt*/
void increment(double *dt){
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
		return;
	}
}
