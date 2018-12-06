#include <stdio.h>
#include <math.h>
#include "calcul.h"
#include "string.h"

/**************************************LORENZ SYSTEM**************************************/

//calculation of initial speed of lorenz system
void lorenz_init(double speed[], double position[], double parameter[]){
	speed[0] = parameter[0] * (position[1] - position[0]);
        speed[1] = position[0] * (parameter[1] - position[2]) - position[1];
        speed[2] = position[0] * position[1] - parameter[2] * position[2];
	return;
}

//calculation of instant speed of lorenz system
void lorenz_t(double speed_t[], double position[], double parameter[], double *dt){
	speed_t[0] = position[0] + (parameter[0] * (position[1] - position[0])) * (*dt);
        speed_t[1] = position[1] + (position[0] * (parameter[1] - position[2]) - position[1]) * (*dt);
        speed_t[2] = position[2] + (position[0] * position[1] - parameter[2] * position[2]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
        return;
}

/*****************************************************************************************/
/***************************************EULER SYSTEM**************************************/

//calculation of initial speed of euler system, the only 2D system
void euler_init(double speed[], double position[], double parameter[]){
	speed[0] = position[1];
        speed[1] = (-parameter[0] / (parameter[1]) * sin(position[0]) - (parameter[2]) / (parameter[3])) * speed[0];
        return;
}

//calculation of instant speed of euler system, the only 2D system
void euler_t(double speed_t[], double position[], double parameter[], double *dt){
	speed_t[0] = position[0] + position[1] * (*dt);
        speed_t[1] = position[1] + (( -(parameter[0]) / (parameter[1])) * sin(position[0]) - ((parameter[2]) / parameter[3]) * position[1]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        return;
}

/*****************************************************************************************/
/****************************************AIZAWA SYSTEM************************************/

//calculation of initial speed of aizawa system
void aizawa_init(double speed[], double position[], double parameter[]){
	speed[0] = (position[2] - parameter[1]) * position[0] - parameter[3] * position[1];
        speed[1] = parameter[3] * position[0] + (position[2] - parameter[1]) * position[1];
        speed[2] = parameter[2] + parameter[0] * position[2] - (pow(position[2], 3) / 3) - (pow(position[0], 2) + pow(position[1], 2)) * (1 + parameter[4] * position[2] )  + parameter[5] * pow(position[0], 3) * position[2];
        return;
}

//calculation of instant speed of aizawa system
void aizawa_t(double speed_t[], double position[], double parameter[], double *dt){
	speed_t[0] =position[0] + ((position[2] - parameter[1]) * position[0] -parameter[3] * position[1]) * (*dt);
	speed_t[1] =position[1] +  (parameter[3] * position[0] + (position[2] - parameter[1]) * position[1]) * (*dt);
	speed_t[2] =position[2] +  (parameter[2] + parameter[0] * position[2] - (pow(position[2], 3) / 3) - (pow(position[0], 2) + pow(position[1], 2)) * (1 + parameter[4] * position[2] )  + parameter[5] * pow(position[0], 3) * position[2]) * (*dt);
	position[0] = speed_t[0];
	position[1] = speed_t[1];
	position[2] = speed_t[2];
        return;
}

/*****************************************************************************************/
/****************************************ANISHCHENKO SYSTEM*******************************/

//calculation of initial speed of anishchenko system
void anishchenko_init(double speed[], double position[], double parameter[]){
        speed[0] = parameter[0] * position[0] + position[1] - position[0] *position[2];
        speed[1] = - position[0];
        if (position[0] > 0){
                speed[2] = -parameter[1] * position[2] + parameter[1] * pow(position[0],2);
        }
        else{
                speed[2] = -parameter[1] * position[2];
        }
        return;
}

//calculation of initial speed of anishchenko system
void anishchenko_t(double speed_t[], double position[], double parameter[], double *dt){
        speed_t[0] = position[0] + (parameter[0] * position[0] + position[1] - position[0] *position[2]) * (*dt);
        speed_t[1] = position[1] + (- position[0]) * (*dt);
        if (position[0] > 0){
                speed_t[2] = position[2] + (-parameter[1] * position[2] + parameter[1] * pow(position[0],2)) * (*dt);
        }
        else{
                speed_t[2] = position[2] + (-parameter[1] * position[2]) * (*dt);
        }
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
        return;
}

/*****************************************************************************************/

/*main loop of calculation of initial speed according to choosen dynamic system */
void initial_speed(double speed[], double position[], double parameter[], char flag[]){
	
	if (strcmp(flag,"1") == 0){//lorenz system : initial speed
		lorenz_init(speed, position, parameter);
	}
	
	if (strcmp(flag,"2") == 0){//euler system : initial speed
		euler_init(speed, position, parameter);
	}
	
	if (strcmp(flag,"3") == 0){//aizawa system : initial speed
                aizawa_init(speed, position, parameter);
	}

	if (strcmp(flag,"4") == 0){//anishchenko system : initial speed
                anishchenko_init(speed, position, parameter);
	}

	return;
}

/*main loop of calculation of instant speed according to choosen dynamic system */
void instant_speed(double speed_t[], double position[],double parameter[], double *dt, char flag[]){
	
	if (strcmp(flag,"1") == 0){//lorenz system : instant speed
		lorenz_t(speed_t, position, parameter, dt);
	}

	if (strcmp(flag,"2") == 0){//euler system : instant speed
		euler_t(speed_t, position, parameter, dt);
	}

	if (strcmp(flag,"3") == 0){//aizawa system : instant speed
		aizawa_t(speed_t, position, parameter, dt);
	}

	if (strcmp(flag,"4") == 0){//anishchenko system : instant speed
		anishchenko_t(speed_t, position, parameter, dt);						
	}

	return;
}
