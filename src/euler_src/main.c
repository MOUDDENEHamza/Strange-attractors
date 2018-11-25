#include <stdio.h>
#include "calcul.h"
#include "input.h"
#include "file.h"
#include "gnuplot.h"

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
	return 0;
}
