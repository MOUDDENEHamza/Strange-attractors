#ifndef _FILE_H_
#define _FILE_H_

#include "struct.h"

/*fix the file name adapted to the choosen dynamic system*/
char f_name(char file_name[], char flag[]);

/*this function give the name of the dyanmic system choosen and _coordinates.dat to point_file*/
void p_file(char file_name[], char point_file[], char flag[]);

/*this function give the name of the dyanmic system choosen and _vectors.dat to vector_file*/
void v_file(char file_name[], char vector_file[], char flag[]);

/*initialize and open file, write into the file, then close it*/
void file(double position[], double speed_t[], double *i, char flag[], char point_file[], char vector_file[]);

#endif
