#include <stdio.h>
#include <math.h>
#include "calcul.h"
#include "string.h"
#include "dynamicSystems.h"

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

	if (strcmp(flag,"5") == 0){//hoover system : initial speed
                hoover_init(speed, position, parameter);
        }
	
	if (strcmp(flag,"6") == 0){//roosler system : initial speed
                rossler_init(speed, position, parameter);
        }
	
	if (strcmp(flag,"7") == 0){//coullet system : initial speed
                coullet_init(speed, position, parameter);
        }
	
	if (strcmp(flag,"8") == 0){//hadley system : initial speed
		hadley_init(speed, position, parameter);
	}
	
	if (strcmp(flag,"9") == 0){//rayleigh system : initial speed
		rayleigh_init(speed, position, parameter);
	}
	if (strcmp(flag,"10") == 0){//thomas system : initial speed
		thomas_init(speed, position, parameter);
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
	
	if (strcmp(flag,"5") == 0){//hoover system : instant speed
                hoover_t(speed_t, position, parameter, dt); 
	}
	
	if (strcmp(flag,"6") == 0){//rossler system : instant speed
                rossler_t(speed_t, position, parameter, dt);
        }
	
	if (strcmp(flag,"7") == 0){//coullet system : instant speed
                coullet_t(speed_t, position, parameter, dt);
        }

	if (strcmp(flag,"8") == 0){//hadley system : instant speed
		hadley_t(speed_t, position, parameter, dt);
	}
	
	if (strcmp(flag,"9") == 0){//rayleigh system : instant speed
		rayleigh_t(speed_t, position, parameter, dt);
	}
	if (strcmp(flag,"10") == 0){//thomas system : instant speed
		thomas_t(speed_t, position, parameter, dt);
	}


	position[0] = speed_t[0];
        position[1] = speed_t[1];
        position[2] = speed_t[2];

	return;
}
