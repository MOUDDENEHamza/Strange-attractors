#ifndef _STRUCT_H_
#define _STRUCT_H_

/*we will create a common structure between all dynamic systems that contains position and speed*/
struct point{
	double *position;
	double *speed;
	double *speed_t;
	double dt;
	double tmax;
}*p;


/*we will create a structure between all dynamic systems that contains parametrs*/
struct parameter{
	double *parameter;
}*para;

/*this function will handle the point struct by creating a dynamic allocation*/
void handle_p(void);

/*this function will handle the parameters struct by creating a dynamic allocation*/
void handle_para(void);

#endif
