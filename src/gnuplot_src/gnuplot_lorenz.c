#include <stdio.h>
#include "gnuplot_lorenz.h"

/*lunch gnuplot from c programm and display just points*/
void gnuplot_point(){
        FILE *pipe = popen("gnuplot -persist","w");
        fprintf(pipe, "splot 'lorenz_vector.dat' u 2:3:4\n");
        pclose(pipe);
        return;
}

/*lunch gnuplot from c programm and display points and vectors*/
void gnuplot_vector(){
	FILE *pipe = popen("gnuplot -persist","w");
    	fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");
	fprintf(pipe, "splot 'lorenz_vector.dat' u 2:3:4:5:6:7 with vectors arrowstyle 1\n");
  	pclose(pipe);
	return;
}
