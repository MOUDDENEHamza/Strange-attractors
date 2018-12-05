#include <stdio.h>
#include "file.h"

/*initialize file, update position, write to file then close it*/
void file(double position[], double speed_t[], double *i, int *flag){
	FILE *f, *F;
	if (*flag == 1){//put the data into Lorenz system files
		f = fopen("lorenz_coordinates.dat", "a+");
		F = fopen("lorenz_vector.dat", "a+");
		fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
		fprintf(F, "%lf %lf     %lf	%lf	%lf	%lf	%lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
	}
	if (*flag == 2){//put the data into Lorenz system files
			f = fopen("euler_coordinates.dat", "a+");
		F = fopen("euler_vector.dat", "a+");
		fprintf(f, "%lf %lf	%lf\n", *i, position[0], position[1]);
		fprintf(F, "%lf %lf     %lf	%lf	%lf\n", *i, speed_t[0], speed_t[1], speed_t[0] + 0.5, speed_t[1] + 0.5);
	}
	fclose(f);
	fclose(F);
	return;
}
