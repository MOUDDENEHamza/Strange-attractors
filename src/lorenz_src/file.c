#include <stdio.h>
#include "file.h"

/*initialize file, update position, write to file then close it*/
<<<<<<< HEAD
void file(double position[], double speed_t[], double *i){
=======
void file(double position[], double *i){
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
	FILE *f, *F;
        f = fopen("lorenz_coordinates.dat", "a+");
	F = fopen("lorenz_vector.dat", "a+");
        fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
<<<<<<< HEAD
	fprintf(F, "%lf %lf     %lf	%lf	%lf	%lf	%lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
=======
	fprintf(F, "%lf %lf     %lf	%lf	%lf	%lf	%lf\n", *i, position[0], position[1], position[2], position[0] + 0.5, position[1] + 0.5, position[0] + 0.5);
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
	fclose(f);
	fclose(F);
	return;
}
