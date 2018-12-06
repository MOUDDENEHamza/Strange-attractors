#include <stdio.h>
#include "gnuplot.h"
#include "string.h"

/*lunch gnuplot from c programm and display the curve of points*/
void gnuplot_point(char flag[]){
        FILE *pipe = popen("gnuplot -persist","w");

	if (strcmp(flag,"2") != 0){//draw the curve of 3D dynamic system by typing the command below.
		fprintf(pipe, "splot 'system_coordinates.dat' u 2:3:4 with points palette\n");
	}

	if (strcmp(flag,"2") == 0){//draw the curve of euler system by typing the command below. 
		fprintf(pipe, "plot 'system_coordinates.dat' u 2:3:0 with points palette\n");
	}

        pclose(pipe);
        
	return;
}

/*lunch gnuplot from c programm and display the curve of vectors*/
void gnuplot_vector(char flag[]){
	FILE *pipe = popen("gnuplot -persist","w");
	
	fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");

	if (strcmp(flag,"2") != 0){//draw the curve of 3D dynamic system by typing the command below.
		fprintf(pipe, "splot 'system_vector.dat' u 2:3:4:5:6:7 with vectors arrowstyle 1\n");
	}

	if (strcmp(flag,"2") == 0){//draw the curve of euler system by typing the command below.
	        fprintf(pipe, "plot 'system_vector.dat' u 2:3:4:5 with vectors arrowstyle 1\n");
	}  	

	pclose(pipe);

	return;
}
