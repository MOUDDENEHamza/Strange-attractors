#include <stdio.h>
#include "dynamicSystems.h"
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

//calculation of initial speed of anishchenko system.
void anishchenko_t(double speed_t[], double position[], double parameter[], double *dt){
        
	speed_t[0] = position[0] + (parameter[0] * position[0] + position[1] - position[0] *position[2]) * (*dt);
        speed_t[1] = position[1] + (- position[0]) * (*dt);
        if (position[0] > 0){
                speed_t[2] = position[2] + (-parameter[1] * position[2] + parameter[1] * pow(position[0],2)) * (*dt);
        }
        else{
                speed_t[2] = position[2] + (-parameter[1] * position[2]) * (*dt);
        }

        return;
}

/*****************************************************************************************/
/****************************************HOOVER SYSTEM************************************/

//calculation of initial speed of hoover system.
void hoover_init(double speed[], double position[], double parameter[]){
	
	speed[0] = position[1];
	speed[1] = -position[1] + position[1] * position[2];
	speed[2] = parameter[0] - pow(position[1], 2);

	return;
}

//calculation of instant speed of hoover system.
void hoover_t(double speed_t[], double position[], double parameter[], double *dt){

        speed_t[0] = position[0] +  position[1] * (*dt);
        speed_t[1] = position[1] + (-position[1] + position[1] * position[2]) * (*dt);
        speed_t[2] = position[2] + (parameter[0] - pow(position[1], 2)) * (*dt);
        
	return;
}

/*****************************************************************************************/
/****************************************ROSSLER SYSTEM************************************/

//calculation of initial speed of rossler system.
void rossler_init(double speed[], double position[], double parameter[]){

        speed[0] = -(position[1] + position[2]);
        speed[1] = position[0] + parameter[0] * position[1];
        speed[2] = parameter[1] + position[2] * (position[0] - parameter[2]);

        return;
}

//calculation of instant speed of rossler system.
void rossler_t(double speed_t[], double position[], double parameter[], double *dt){

        speed_t[0] = position[0] +  (-(position[1] + position[2])) * (*dt);
        speed_t[1] = position[1] + (position[0] + parameter[0] * position[1]) * (*dt);
        speed_t[2] = position[2] + (parameter[1] + position[2] * (position[0] - parameter[2])) * (*dt);
        
	return;
}

/*****************************************************************************************/
/****************************************COULLET SYSTEM************************************/

//calculation of initial speed of coullet system.
void coullet_init(double speed[], double position[], double parameter[]){

        speed[0] = position[1];
        speed[1] = position[2];
        speed[2] = parameter[0] * position[0] + parameter[1] * position[1] + parameter[2] * position[2] + parameter[3] * pow(position[0], 3);

        return;
}

//calculation of instant speed of coullet system.
void coullet_t(double speed_t[], double position[], double parameter[], double *dt){

        speed_t[0] = position[0] +  (position[1]) * (*dt);
        speed_t[1] = position[1] + (position[2]) * (*dt);
        speed_t[2] = position[2] + (parameter[0] * position[0] + parameter[1] *  position[1] + parameter[2] * position[2] + parameter[3] * pow(position[0], 3)) * (*dt);
        
	return;
}

/*******************************************************************************************/
/**************************************HADLEY SYSTEM**************************************/

//calculation of initial speed of hadley system
void hadley_init(double speed[], double position[], double parameter[]){

        speed[0] = - pow(position[1], 2) - pow(position[2], 2) - parameter[0] * position[0] + parameter[0] * parameter[2];
	speed[1] = position[0] * position[1] - parameter[1] * position[2] * position[0] -  position[1] + parameter[3];
	speed[2] = parameter[1] * position[0] * position[1] + position[0] * position[2] - position[2];
                                
	return;
}

//calculation of instant speed of hadley system
void hadley_t(double speed_t[], double position[], double parameter[], double *dt){

	speed_t[0] = position[0] + (-pow(position[1], 2) - pow(position[2], 2) - parameter[0] * position[0] + parameter[0] * parameter[2]) * (*dt);
	speed_t[1] = position[1] + (position[0] * position[1] - parameter[1] * position[2] * position[0] - position[1] + parameter[3]) * (*dt);
	speed_t[2] = position[2] + (parameter[1] * position[0] * position[1] + position[0] * position[2] - position[2]) * (*dt);

	return;
}
/*****************************************************************************************/
