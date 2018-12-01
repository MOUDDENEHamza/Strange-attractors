#include <stdio.h>
#include <math.h>
#include "calcul.h"

<<<<<<< HEAD
void initial_speed(double speed[], double position[], double *g, double *l, double *gamma, double *m){
	speed[0] = position[1];
	speed[1] = (-(*g)/(*l))*sin(position[0]) - ((*gamma)/(*m))*speed[0];
}


void instant_speed(double speed_t[], double position[], double *g, double *l, double *gamma, double *m, double *dt){
	speed_t[0] = position[0] + position[1] * (*dt);
	speed_t[1] = position[1] + (( -(*g) / (*l)) * sin(position[0]) - ((*gamma) / (*m)) * position[1]) * (*dt);
	position[0] = speed_t[0];
	position[1] = speed_t[1];
=======
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
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
}



