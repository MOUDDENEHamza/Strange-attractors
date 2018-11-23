#include <stdio.h>
#include "gnuplot.h"

void gnuplot(){
	FILE *pipe = popen("gnuplot -persist","w");
    	fprintf(pipe, "splot 'lorenz.dat' u 2:3:4\n");
  	pclose(pipe);
	return;
}
