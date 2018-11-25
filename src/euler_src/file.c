#include <stdio.h>
#include "file.h"

/*initialize file, update position, write to file then close it*/
void file(double position[], double *i){
	FILE *f;
	f = fopen("euler.dat", "a+");
	fprintf(f, "%lf %lf	%lf\n", *i, position[0], position[1]);
	fclose(f);
	return;
}
