#include <stdio.h>
#include "input.h"
#include "calcul.h"
#include "gnuplot.h"
#include "file.h"
#include "displayShell.h"
#include "struct.h"
#include "dynamicSystems.h"
#include "inputSystems.h"

#define BUFFER 255

/*main function : Lorenz system */
int main(int argc, char *argv[]) {
	/*initialize all variables*/
	char flag[BUFFER];
	char by_default[BUFFER];
	char file_name[BUFFER];
	char point_file[BUFFER];
	char vector_file[BUFFER];
	double i = 0;

	/*create and handle the structures*/
	handle_p();
	handle_para();

	/*ask the user to choose one dynamic system*/
	launch_programm();

	/*ask user to choose the dynamic system by typing a number between 1 ad 10*/
	type_flag(flag);

	/*fix the name file for choosen dynamic system*/
	f_name(file_name, flag);

	/*display : the init bar with the dynamic system's name that will be used*/
	display_init(file_name);

	/*ask user if he wants to execute the programm with default setting*/
	default_parameters(by_default);

	/*input : initial coordinates*/
	coordinates(p->position, flag, by_default);

	/*input : constants*/
	constants(para->parameter, flag, by_default);

	/*calculation and display of speed dx dy dz*/
	initial_speed(p->speed, p->position, para->parameter, flag);

	/*display : initial speed*/
	display_speed(p->speed, flag);

	/*input : increment dt*/
	increment(&p->dt, by_default);

	/*input : break time Tmax*/
	break_time(&p->tmax, &p->dt, by_default);

	/*display : the coordinates that will be stored in the file*/
	display_coordinates(p->position, &i, flag);

	/*initialize files, update position, write to file then close it*/
	p_file(file_name, point_file, flag);
	v_file(file_name, vector_file, flag);
	file(p->position, p->speed_t, &i, flag, point_file, vector_file);

	/*main loop : calculation of instant speed and coordinates at every t instant, then it writes this data into the file*/
	for (i = p->dt; i <= p->tmax + p->dt; i += p->dt) {
		/*calcul : the new position at every moment t*/
		instant_speed(p->speed_t, p->position, para->parameter, &p->dt, flag);
		/*display : the new position at every moment t*/
		display_coordinates(p->position, &i, flag);
		/*write to file the new position at every moment t then close it*/
		file(p->position, p->speed_t, &i, flag, point_file, vector_file);
	}

	/*run : launch gnuplot from main.c*/
	gnuplot_point(flag, point_file); //draw the curve by displaying only the coordinates
	gnuplot_vector(flag, vector_file); //draw the curve by displaying only the vectors

	/*display : the end bar*/
	display_end();

	return 0;
}
