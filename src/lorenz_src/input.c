#include <stdio.h>
#include "input.h"

/*input : initial coordinates x, y, z*/
void coordinates(double position[]){
	printf("type the coordinate x : ");
        scanf("%lf", &position[0]);
        printf("type the coordinate y : ");
        scanf("%lf", &position[1]);
        printf("type the coordinate z : ");
        scanf("%lf", &position[2]);
}

/*input : constants σ, ρ, β*/ 
void  constants(double *sigma, double *rho, double *beta){
	printf("type σ : ");
	scanf("%lf", sigma);
        printf("type ρ : ");
        scanf("%lf", rho);
        printf("type β : ");
        scanf("%lf", beta);
}

/*input : increment dt*/
void increment(double *dt){
        while(1){
		printf("type the increment dt : ");
                scanf("%lf", dt);
		/*erreur : l'incrément est nul ou négatif*/
		if(*dt <= 0){
			printf("the increment is incorrect, please try again.\n");
			continue;
		}
		return;
	}
	
}

/*input : break time Tmax*/
void break_time(double *tmax, double *dt){
	while(1){
        	printf("type the break time Tmax : ");
		scanf("%lf", tmax);
		/*erreur : le temps d'arret est inférieur a dt*/
		if(*tmax <= *dt){
			printf("the break time is incorrect, please try again.\n");
                	continue;
                }
        	return;
	}
}
