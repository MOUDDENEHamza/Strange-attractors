#include <stdio.h>
#include "input.h"

/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[], int *flag){
	if (*flag == 1){
		printf("type the coordinate x : ");
		scanf("%lf", &position[0]);
		printf("type the coordinate y : ");
		scanf("%lf", &position[1]);
		printf("type the coordinate z : ");
		scanf("%lf", &position[2]);
		return;
	}	
	if (*flag == 2){        
		printf("enter α : ");
		scanf("%lf", &position[0]);
		printf("enter β : ");
		scanf("%lf", &position[1]);
		return;
	}
}

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *sigma, double *rho, double *beta, double *g, double *l, double *gamma, double *m, int *flag){
	if (*flag == 1){
		printf("type σ : ");
		scanf("%lf", sigma);
		printf("type ρ : ");
		scanf("%lf", rho);
		printf("type β : ");
		scanf("%lf", beta);	
		return;
	}	
	if (*flag == 2){ 	
		printf("enter g : ");
		scanf("%lf", g);
		printf("enter l : ");
		scanf("%lf", l);
		printf("enter γ : ");
		scanf("%lf", gamma);
		printf("enter m : ");
		scanf("%lf", m);
		return;
	}
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

