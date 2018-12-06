#ifndef _STRUCT_H_
#define _STRUCT_H_

/*we will create a common structure between all dynamic systems that contains position and speed*/
struct point{
	double position[3];
	double speed[3];
	double speed_t[3];
	double dt;
        double tmax;
}p;

/*we will create a structure between all dynamic systems that contains parametrs*/
struct parameter{
	double parameter[6];
}para;

#endif
