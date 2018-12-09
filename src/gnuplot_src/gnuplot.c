#include <stdio.h>
#include "gnuplot.h"
#include "string.h"

/*launch gnuplot from C programm and display the curve of points*/
void gnuplot_point(char flag[], char point_file[]){

	FILE *pipe = popen("gnuplot -persist","w");

	if (strcmp(flag,"2") != 0){//draw the curve of 3D dynamics systems by typing the command below.
		fprintf(pipe, "splot '%s' u 2:3:4 with points palette\n", point_file);
	}

	if (strcmp(flag,"2") == 0){//draw the curve of euler system by typing the command below. 
		fprintf(pipe, "plot '%s' u 2:3:0 with points palette\n", point_file);
	}

        pclose(pipe);
        
	return;
}

/*launch gnuplot from C programm and display the curve of vectors*/
void gnuplot_vector(char flag[], char vector_file[]){
	FILE *pipe = popen("gnuplot -persist","w");
	
	fprintf(pipe, "set style arrow 1 linecolor rgb 'red'\n");

	if (strcmp(flag,"2") != 0){//draw the curve of 3D dynamics systems by typing the command below.
		fprintf(pipe, "splot '%s' u 2:3:4:5:6:7 with vectors arrowstyle 1\n", vector_file);
	}

	if (strcmp(flag,"2") == 0){//draw the curve of euler system by typing the command below.
	        fprintf(pipe, "plot '%s' u 2:3:4:5 with vectors arrowstyle 1\n", vector_file);
	}  	

	pclose(pipe);

	return;
}
