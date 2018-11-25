#include <stdio.h>
#include <math.h>
#include "calcul.h"

void initial_speed(double position[], double *g, double *l, double *gamma, double *m){
	double dy;
	printf("dx = %lf\n", position[1]);
	dy = (-(*g)/(*l))*sin(position[0]) - ((*gamma)/(*m))*position[1];
	printf("dy = %lf \n", dy);
}


void coordinates(double position[], double *g, double *l, double *gamma, double *m, double *dt){
	double xt;
	double yt;
	xt=position[0]+position[1]*(*dt);
	yt=position[1]+((-(*g)/(*l))*sin(position[0])-((*gamma)/(*m))*position[1])*(*dt);
	position[0]=xt;
	position[1]=yt;
	printf("%lf		%lf\n", position[0],position[1]);
}



