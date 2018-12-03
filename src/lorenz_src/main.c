#include <stdio.h>
#include "input.h"
#include "lorenz.h"
#include "gnuplot_lorenz.h"
#include "file_lorenz.h"
#include "displayShell_lorenz.h"
#include "struct_lorenz.h"

/*main function : Lorenz system */
int main(int argc, char *argv[]){
	/*initialize all variables*/
	double dt;
	double tmax;
        double i = 0;
	
	/*display : the init bar with the dynamic system that will be used*/
	display_init();

	/*input : initial coordinates x, y, z*/
	coordinates(p.position);

	/*input : constants σ, ρ, β*/
	constants(&para.sigma, &para.rho, &para.beta);

	/*calculation and display of speed dx dy dz*/
	initial_speed(p.speed, p.position, &para.sigma, &para.rho, &para.beta);
	
	/*display : initial speed*/
	display_speed(p.speed);

	/*input : increment dt*/
	increment(&dt);

	/*input : break time Tmax*/
	break_time(&tmax, &dt);
	
	/*display : the coordinates that will be stored in lorenz.dat*/
	display_coordinates(p.position, &i);
	
	/*initialize file, update position, write to file then close it*/
	file(p.position, p.speed,  &i);

	for(i = dt;i <= tmax; i += dt){
		/*calcul : the new position at every moment t*/
		instant_speed(p.speed_t, p.speed, p.position, &para.sigma, &para.rho, &para.beta, &dt);
		/*display : the new position at every moment t*/
		display_coordinates(p.position, &i);
		/*write to file the new position at every moment t then close it*/
		file(p.position, p.speed_t, &i);
	}

	/*run : lunch gnuplot from main.c*/
	gnuplot_point();
	gnuplot_vector();
	
	/*display : the end bar*/
	display_end();

	return 0;
}
