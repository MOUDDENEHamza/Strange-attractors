#include <stdio.h>
#include "gnuplot.h"

/*lunch gnuplot from c programm*/
void gnuplot(){
	FILE *pipe = popen("gnuplot -persist","w");
	fprintf(pipe, "plot 'euler.dat' u 2:3\n");
	pclose(pipe);
	return;
}
