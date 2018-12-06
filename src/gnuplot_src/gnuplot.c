#include <stdio.h>
#include "gnuplot.h"
#include "string.h"

/*lunch gnuplot from c programm and display just points*/
void gnuplot_point(char flag[]){
        FILE *pipe = popen("gnuplot -persist","w");
	if (strcmp(flag,"1") == 0){//launch Lorenz curve by typing the command below, then draw the coordinates curve       
		fprintf(pipe, "splot 'lorenz_coordinates.dat' u 2:3:4 with points palette\n");
	}
	if (strcmp(flag,"2") == 0){//launch Euler curve by typing the command below, then draw the coordinates curve 
		fprintf(pipe, "plot 'euler_coordinates.dat' u 2:3:0 with points palette\n");
	}
	if (strcmp(flag,"3") == 0){//launch Lorenz curve by typing the command below, then draw the coordinates curve
                fprintf(pipe, "splot 'aizawa_coordinates.dat' u 2:3:4 with points palette\n");
        }
        pclose(pipe);
        return;
}

/*lunch gnuplot from c programm and display points and vectors*/
void gnuplot_vector(char flag[]){
	FILE *pipe = popen("gnuplot -persist","w");
	fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");
    	if (strcmp(flag,"1") == 0){//launch Lorenz curve by typing the command below, then draw the vectors curve 
		fprintf(pipe, "splot 'lorenz_vector.dat' u 2:3:4:5:6:7 with vectors arrowstyle 1\n");
	}
	if (strcmp(flag,"2") == 0){//launch Euler curve by typing the command below, then draw the vectors curve 
	        fprintf(pipe, "plot 'euler_vector.dat' u 2:3:4:5 with vectors arrowstyle 1\n");
	}  	
	if (strcmp(flag,"3") == 0){//launch Lorenz curve by typing the command below, then draw the vectors curve
                fprintf(pipe, "splot 'aizawa_vector.dat' u 2:3:4:5:6:7 with vectors arrowstyle 1\n");
	}
	pclose(pipe);
	return;
}
