#include <stdio.h>
#include <string.h>
#include "file.h"

/*fix the file name adapted to the choosen dynamic system*/
void f_name(char file_name[], char flag[]){
	if (strcmp(flag,"1") == 0){//file name : Lorenz.
                strcpy(file_name, "lorenz");
        }

	if (strcmp(flag,"2") == 0){//file name : Euler.
                strcpy(file_name, "euler");
        }

	if (strcmp(flag,"3") == 0){//file name : Aizawa.
                strcpy(file_name, "aizawa");
        }

	if (strcmp(flag,"4") == 0){//file name : Anishchenko.
                strcpy(file_name, "anishchenko");
        }

	return;
}

/*initialize and open file, write into the file, then close it*/
void file(double position[], double speed_t[], double *i, char flag[]){
	FILE *f, *F;
	
	f = fopen("system_coordinates.dat", "a+");
	F = fopen("system_vector.dat", "a+");
	

	if (strcmp(flag,"2") != 0){//put data into 3D dynamic system files.
		fprintf(f, "%lf \t %lf \t %lf \t %lf\n", *i, position[0], position[1], position[2]);
		fprintf(F, "%lf \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf\n", *i, speed_t[0], speed_t[1], speed_t[2], speed_t[0] + 0.5, speed_t[1] + 0.5, speed_t[2] + 0.5);
	}
	
	if (strcmp(flag,"2") == 0){//put data into euler system files.
		fprintf(f, "%lf \t %lf \t %lf\n", *i, position[0], position[1]);
		fprintf(F, "%lf \t %lf \t %lf \t %lf \t %lf\n", *i, speed_t[0], speed_t[1], speed_t[0] + 0.5, speed_t[1] + 0.5);
	}

	fclose(f);
	fclose(F);
	
	return;
}
