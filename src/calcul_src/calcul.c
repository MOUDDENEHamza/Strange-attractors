#include <stdio.h>
#include <math.h>
#include "calcul.h"
#include "string.h"

/*calculation of initial speed according to choosen dynamic system */
void initial_speed(double speed[], double position[], double parameter[], char flag[]){
	if (strcmp(flag,"1") == 0){//lorenz system
        speed[0] = parameter[0] * (position[1] - position[0]);
        speed[1] = position[0] * (parameter[1] - position[2]) - position[1];
        speed[2] = position[0] * position[1] - parameter[2] * position[2];
	}
	if (strcmp(flag,"2") == 0){//euler system
		speed[0] = position[1];
		speed[1] = (-parameter[0] / (parameter[1])*sin(position[0]) - (parameter[2])/(parameter[3]))*speed[0];	
	}
	return;
}

/*calculation of instant speed according to choosen dynamic system */
void instant_speed(double speed_t[], double speed[], double position[],double parameter[], double *dt, char flag[]){
	if (strcmp(flag,"1") == 0){//lorenz system	
	speed_t[0] = position[0] + parameter[0] * (position[1] - position[0]) * (*dt);
        speed_t[1] = position[1] + (position[0] * (parameter[1] - position[2]) - position[1]) * (*dt);
        speed_t[2] = position[2] + (position[0] * position[1] - parameter[2] * position[2]) * (*dt);
        position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];
	}
	if (strcmp(flag,"2") == 0){//euler system
		speed_t[0] = position[0] + position[1] * (*dt);
		speed_t[1] = position[1] + (( -(parameter[0]) / (parameter[1])) * sin(position[0]) - ((parameter[2]) / parameter[3]) * position[1]) * (*dt);
		position[0] = speed_t[0];
		position[1] = speed_t[1];
	}
	if (strcmp(flag,"3") == 0){//Aizawa system
		speed_t[0] =position[0] + ((position[2] - parameter[1]) * position[0] -parameter[3] * position[1]) * (*dt);
                speed_t[1] =position[1] +  (parameter[3] * position[0] + (position[2] - parameter[1]) * position[1]) * (*dt);
                speed_t[2] =position[2] +  (parameter[2] + parameter[0] * position[2] - (pow(position[2], 3) / 3) - (pow(position[0], 2) + pow(position[1], 2)) * (1 + parameter[4] * position[2] )  + parameter[5] * pow(position[0], 3) * position[2]) * (*dt);

                position[0] = speed_t[0];
                position[1] = speed_t[1];
                position[2] = speed_t[2];
	}
	return;
}
