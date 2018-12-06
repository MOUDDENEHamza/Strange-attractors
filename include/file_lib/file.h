#ifndef _FILE_H_
#define _FILE_H_

#include "struct.h"

/*fix the file name adapted to the choosen dynamic system*/
void f_name(char file_name[], char flag[]);

/*initialize and open file, write into the file, then close it*/
void file(double position[], double speed_t[], double *i, char flag[]);

#endif
