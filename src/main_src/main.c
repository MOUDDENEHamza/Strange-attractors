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
	char by_default[255];
        double i = 0;
	
	/*ask the user to choose one dynamic system*/
	launch_programm();
	
	/*ask user to choose the dynamic system by typing 1 or 2*/
	type_flag(&flag);

	/*display : the init bar with the dynamic system that will be used*/
        display_init(&flag);
	
	/*ask user if he wants to execute the programm with default setting*/
	default_parameters(by_default);

	/*input : initial coordinates x, y, z*/
	coordinates(p.position, &flag, by_default);

	/*input : constants σ, ρ, β*/
	constants(&para.sigma, &para.rho, &para.beta, &para.g, &para.l, &para.gamma, &para.m, &flag, by_default);

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
	
	/*main loop : calculation of instant speed and coordinates at every t instant, then I write this data into the file*/
	for(i = p.dt;i <= p.tmax; i += p.dt){
		/*calcul : the new position at every moment t*/
		instant_speed(p.speed_t, p.speed, p.position, &para.sigma, &para.rho, &para.beta, &para.g, &para.l, &para.gamma, &para.m, &p.dt, &flag);
		/*display : the new position at every moment t*/
		display_coordinates(p.position, &i, &flag);
		/*write to file the new position at every moment t then close it*/
		file(p.position, p.speed_t, &i, &flag);
	}

	/*run : lunch gnuplot from main.c*/
	gnuplot_point(&flag);//draw the curve by displaying only the coordinates
	gnuplot_vector(&flag);//draw the curve by displaying only the vectors
	
	/*display : the end bar*/
	display_end();

	return 0;
}
