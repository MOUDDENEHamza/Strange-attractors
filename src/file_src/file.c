#include <stdio.h>
#include "file.h"
#include "string.h"

/*initialize file, update position, write to file then close it*/
void file(double position[], double speed_t[], double *i, char flag[]){
	FILE *f, *F;
	
	f = fopen("system_coordinates.dat", "a+");
	F = fopen("system_vector.dat", "a+");
	

	if (strcmp(flag,"2") != 0){
		fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
		fprintf(F, "%lf %lf     %lf     %lf     %lf     %lf     %lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
	}
	
	if (strcmp(flag,"2") == 0){//put the data into euler system files
		fprintf(f, "%lf %lf     %lf\n", *i, position[0], position[1]);
		fprintf(F, "%lf %lf     %lf     %lf     %lf\n", *i, speed_t[0], speed_t[1], speed_t[0] + 0.5, speed_t[1] + 0.5);
	}
	/*
	if (strcmp(flag,"1") == 0){//put the data into Lorenz system files
		f = fopen("lorenz_coordinates.dat", "a+");
		F = fopen("lorenz_vector.dat", "a+");
		fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
		fprintf(F, "%lf %lf     %lf	%lf	%lf	%lf	%lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
	}
	
	
	if (strcmp(flag,"2") == 0){//put the data into euler system files
		f = fopen("euler_coordinates.dat", "a+");
		F = fopen("euler_vector.dat", "a+");
		fprintf(f, "%lf %lf	%lf\n", *i, position[0], position[1]);
		fprintf(F, "%lf %lf     %lf	%lf	%lf\n", *i, speed_t[0], speed_t[1], speed_t[0] + 0.5, speed_t[1] + 0.5);
	}
	
	
	if (strcmp(flag,"3") == 0){//put the data into aizawa system files
                f = fopen("aizawa_coordinates.dat", "a+");
                F = fopen("aizawa_vector.dat", "a+");
                fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
                fprintf(F, "%lf %lf     %lf     %lf     %lf     %lf     %lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
        }
	
	
	if (strcmp(flag,"4") == 0){//put the data into anishchenko system files
		f = fopen("anishchenko_coordinates.dat", "a+");
		F = fopen("anishchenko_vector.dat", "a+");
		fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
		fprintf(F, "%lf %lf     %lf     %lf     %lf     %lf     %lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
	}
	*/

	fclose(f);
	fclose(F);
	
	return;
}
