#ifndef _STRUCTURE_H_
#define _STRUCTURE_H_

/*we will create a common structure between all dynamic systems that contains position and speed*/
struct point{
	double position[3];
	double speed[3];
	double speed_t[3];
}p;

/*we will create a structure between all dynamic systems that contains parametrs*/
struct parameter{
	double sigma;
	double rho;
	double beta;
}para;

#endif
