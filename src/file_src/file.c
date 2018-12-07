#include <stdio.h>
#include <string.h>
#include "file.h"

#define BUFFER 255

/*fix the file name adapted to the choosen dynamic system*/
char f_name(char file_name[], char flag[]){
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
	
	if (strcmp(flag,"5") == 0){//file name : Hover.
                strcpy(file_name, "hoover");
        }
	
	if (strcmp(flag,"6") == 0){//file name : Rossler.
                strcpy(file_name, "hoover");
        }
	
	if (strcmp(flag,"7") == 0){//file name : coullet.
                strcpy(file_name, "coullet");
        }
	
	return file_name[BUFFER];
}

/*this function give the name of the dyanmic system choosen and _coordinates.dat to point_file*/
void p_file(char file_name[], char point_file[], char flag[]){
	
	file_name, f_name(file_name, flag);
	strcpy(point_file, strcat(file_name, "_coordinates.dat"));

	return;
}

/*this function give the name of the dyanmic system choosen and _vectors.dat to vector_file*/
void v_file(char file_name[], char vector_file[], char flag[]){
        
	f_name(file_name, flag);
	strcpy(vector_file, strcat(file_name, "_vectors.dat"));
	
	return;
}

/*initialize and open file, write into the file, then close it*/
void file(double position[], double speed_t[], double *i, char flag[], char point_file[], char vector_file[]){
	FILE *f, *F;
	
	f = fopen(point_file, "a+");
	F = fopen(vector_file, "a+");
	

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
