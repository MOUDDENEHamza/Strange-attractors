#include <stdio.h>
#include "input.h"
#include "calcul.h"
#include "gnuplot.h"
#include "file.h"
#include "displayShell.h"
#include "struct.h"

/*main function : Lorenz system */
int main(int argc, char *argv[]){
	/*initialize all variables*/
	int flag;
        double i = 0;

	launch_programm();

	/*the user has to choice one systeme by typing 1(lorenz system) or 2(euler system)*/ 
	scanf("%d", &flag);

	/*display : the init bar with the dynamic system that will be used*/
        display_init(&flag);


	/*input : initial coordinates x, y, z*/
	coordinates(p.position, &flag);

	/*input : constants σ, ρ, β*/
	constants(&para.sigma, &para.rho, &para.beta, &para.g, &para.l, &para.gamma, &para.m, &flag);

	/*calculation and display of speed dx dy dz*/
	initial_speed(p.speed, p.position, &para.sigma, &para.rho, &para.beta, &para.g, &para.l, &para.gamma, &para.m, &flag);
	
	/*display : initial speed*/
	display_speed(p.speed, &flag);

	/*input : increment dt*/
	increment(&p.dt);

	/*input : break time Tmax*/
	break_time(&p.tmax, &p.dt);
	
	/*display : the coordinates that will be stored in lorenz.dat*/
	display_coordinates(p.position, &i, &flag);
	
	/*initialize file, update position, write to file then close it*/
	file(p.position, p.speed_t,  &i, &flag);

	for(i = p.dt;i <= p.tmax; i += p.dt){
		/*calcul : the new position at every moment t*/
		instant_speed(p.speed_t, p.speed, p.position, &para.sigma, &para.rho, &para.beta, &para.g, &para.l, &para.gamma, &para.m, &p.dt, &flag);
		/*display : the new position at every moment t*/
		display_coordinates(p.position, &i, &flag);
		/*write to file the new position at every moment t then close it*/
		file(p.position, p.speed_t, &i, &flag);
	}

	/*run : lunch gnuplot from main.c*/
	gnuplot_point(&flag);
	gnuplot_vector(&flag);
	
	/*display : the end bar*/
	display_end();

	return 0;
}
