#include <stdio.h>
#include "gnuplot.h"

/*lunch gnuplot from c programm and display just points*/
void gnuplot_point(int *flag){
        FILE *pipe = popen("gnuplot -persist","w");
	if (*flag == 1){//launch Lorenz curve by typing the command below, then draw the coordinates curve       
		fprintf(pipe, "splot 'lorenz_vector.dat' u 2:3:4\n");
	}
	if (*flag == 2){//launch Euler curve by typing the command below, then draw the coordinates curve 
		fprintf(pipe, "plot 'euler_coordinates.dat' u 2:3\n");
	}
        pclose(pipe);
        return;
}

/*lunch gnuplot from c programm and display points and vectors*/
void gnuplot_vector(int *flag){
	FILE *pipe = popen("gnuplot -persist","w");
	fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");
    	if (*flag == 1){//launch Lorenz curve by typing the command below, then draw the vectors curve 
		fprintf(pipe, "splot 'lorenz_vector.dat' u 2:3:4:5:6:7 with vectors arrowstyle 1\n");
	}
	if (*flag == 2){//launch Euler curve by typing the command below, then draw the vectors curve 
	        fprintf(pipe, "plot 'euler_vector.dat' u 2:3:4:5 with vectors arrowstyle 1\n");
	}  	
	pclose(pipe);
	return;
}
