#include <stdio.h>
#include "input.h"

/*input : coordonnees x, y, z*/
void coordinates(double position[]){
	printf("entrez la coordonnée x : ");
        scanf("%lf", &position[0]);
        printf("entrez la coordonnée y : ");
        scanf("%lf", &position[1]);
        printf("entrez la coordonnée z : ");
        scanf("%lf", &position[2]);
}

/*input : constantes σ, ρ, β*/ 
void  constants(double *sigma, double *rho, double *beta){
	printf("entrez σ : ");
	scanf("%lf", sigma);
        printf("entrez ρ : ");
        scanf("%lf", rho);
        printf("entrez β : ");
        scanf("%lf", beta);
}

/*input : incrément*/
void increment(double *dt){
        while(1){
		printf("entrez l'incrément dt : ");
                scanf("%lf", dt);
		/*erreur : l'incrément est nul ou négatif*/
		if(*dt <= 0){
			printf("l'incrément est incorrect, réessayez encore.\n");
			continue;
		}
		return;
	}
	
}

/*input : temps d'arret Tmax*/
void break_time(double *tmax, double *dt){
	while(1){
        	printf("entrez le temps d'arret Tmax : ");
		scanf("%lf", tmax);
		/*erreur : le temps d'arret est inférieur a dt*/
		if(*tmax <= *dt){
			printf("le temps d'arret est incorrect, réessayer encore.\n");
                	continue;
                }
        	return;
	}
}
