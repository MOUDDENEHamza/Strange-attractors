#include <stdio.h>
#include "input.h"

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0
/*input : initial coordinates; α is the pendulum tilt angle, β is the angular vitesse*/
void coordinates(double position[]){
        printf("enter α : ");
        scanf("%lf", &position[0]);
        printf("enter β : ");
        scanf("%lf", &position[1]);
}

/*input : constants; g is the gravity field, l is the wire length, γ is the coefficient of friction , m is the mass*/
void constants(double *g, double *l, double *gamma, double *m){
	printf("enter g : ");
	scanf("%lf", g);
	printf("enter l : ");
	scanf("%lf", l);
	printf("enter γ : ");
        scanf("%lf", gamma);
	printf("enter m : ");
	scanf("%lf", m);
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

<<<<<<< HEAD
=======
=======

void constants(double *g, double *l, double *gamma, double *m){
	printf("entrez g : ");
	scanf("%lf", g);
	printf("entrez l : ");
	scanf("%lf", l);
	printf("entrez gamma : ");
        scanf("%lf", gamma);
	printf("entrez m : ");
	scanf("%lf", m);
}

void initial_coordinates(double position[]){
	printf("entrez alpha : ");
       	scanf("%lf", &position[0]);
	printf("entrez beta : ");
	scanf("%lf", &position[1]);
}


void time(double *tmax, double *dt){
	printf("entrez tmax : ");
	scanf("%lf", tmax);
	printf("entrez dt : ");
	scanf("%lf", dt);
}
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0



