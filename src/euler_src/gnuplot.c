#include <stdio.h>
#include "gnuplot.h"

/*lunch gnuplot from c programm*/
void gnuplot_point(){
	FILE *pipe = popen("gnuplot -persist","w");
	fprintf(pipe, "plot 'euler_coordinates.dat' u 2:3\n");
	pclose(pipe);
	return;
}

/*lunch gnuplot from c programm and display points and vectors*/
void gnuplot_vector(){
        FILE *pipe = popen("gnuplot -persist","w");
        fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");
        fprintf(pipe, "plot 'euler_vector.dat' u 2:3:4:5 with vectors arrowstyle 1\n");
        pclose(pipe);
        return;
}
