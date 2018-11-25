#include <stdio.h>
#include "input.h"


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



