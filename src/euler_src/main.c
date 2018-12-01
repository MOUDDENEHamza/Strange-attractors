#include <stdio.h>
#include "calcul.h"
#include "input.h"
#include "file.h"
#include "gnuplot.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0
#include "displayShell.h"
#include "structure.h"

/*main function : euler system */
int main(int argc, char* argv[]){
	/*init : initialize all variables*/
	double i = 0;

	/*display : the init bar with the dynamic system that will be used*/	
	display_init();

	/*input : initial coordinates α, β*/
	coordinates(p.position);
	
	/*input : constants g, l, γ, m*/
	constants(&para.g, &para.l, &para.gamma, &para.m);

	/*calculation of speed dx dy*/
	initial_speed(p.speed, p.position, &para.g, &para.l, &para.gamma, &para.m);
	
	/*display : initial speed*/
        display_speed(p.speed);

	/*input : increment dt*/
        increment(&p.dt);

        /*input : break time Tmax*/
        break_time(&p.tmax, &p.dt);

	
	/*display : the coordinates that will be stored in euler.dat*/
        display_coordinates(p.position, &i);
	
	/*write to file the initial position then close it*/
        file(p.position, p.speed, &i);

	for (i = p.dt; i <= p.tmax; i += p.dt){
		/*display : the new position at every moment t*/
		instant_speed(p.speed_t, p.position, &para.g, &para.l, &para.gamma, &para.m, &p.dt);
		/*display : the coordinates that will be stored in euler.dat*/
        	display_coordinates(p.position, &i);
		/*write to file the new position at every moment t then close it*/
		file(p.position, p.speed_t, &i);
	}

	/*run : lunch gnuplot from main.c*/
	gnuplot_point();
        gnuplot_vector();
	
	/*display : the end bar*/
        display_end();

<<<<<<< HEAD
=======
=======

int main(int argc, char* argv[]){
	double g;
	double l;
	double gamma;
	double m;
	double dt;
	double position[2];
	double tmax;
	

	initial_coordinates(position);
	constants(&g, &l, &gamma, &m);
	time(&tmax, &dt);


	initial_speed(position, &g, &l, &gamma, &m);

	for (double i=0; i<tmax; i+=dt){
		coordinates(position, &g, &l, &gamma, &m, &dt);
		file(position, &i);
	}
	gnuplot();
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0
	return 0;
}
