#ifndef _STRUCTURE_H_
#define _STRUCTURE_H_

/*we will create a common structure between all dynamic systems that contains position and speed*/
struct point{
	double position[2];
	double speed[2];
	double speed_t[2];
	double dt;
	double tmax;
}p;

/*we will create a structure between all dynamic systems that contains parametrs*/
struct parameter{
	double g;
	double l;
	double gamma;
	double m;
}para;

#endif
