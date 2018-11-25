#include <stdio.h>
#include "file.h"

/*initialize file, update position, write to file then close it*/
void file(double position[], double *i){
	FILE *f, *F;
        f = fopen("lorenz_coordinates.dat", "a+");
	F = fopen("lorenz_vector.dat", "a+");
        fprintf(f, "%lf %lf     %lf     %lf\n", *i, position[0], position[1], position[2]);
	fprintf(F, "%lf %lf     %lf	%lf	%lf	%lf	%lf\n", *i, position[0], position[1], position[2], position[0] + 0.5, position[1] + 0.5, position[0] + 0.5);
	fclose(f);
	fclose(F);
	return;
}
