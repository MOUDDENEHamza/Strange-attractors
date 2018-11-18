#include <stdio.h>
#include "../include/input.h"

int main(int argc, char *argv[]){
	/*initialiser toutes les variables*/
	double position[3];
	double speed[3];
	double cste[3];
	double dt;
	double tmax;
        double i = 0;
	double xt, yt ,zt;

	/*initialiser et ouvrir et ecrire dans le fichier lorenz.dat*/
	FILE *f;
	
	f = fopen("lorenz.dat", "w+");
	fputs("temps		x		y		z\n", f);

	/*input : coordonnées initiales*/
	coordinates(position);

	/*input : constantes σ, ρ, β*/
	constants(cste);
	
	/*calcul et affichage de la vitesse dx dy dz*/
	speed[0] = cste[0] * (position[1] - position[0]);
        speed[1] = position[0] * (cste[1] - position[2]) -position[1];
        speed[2] = position[0] * position[1] - cste[2] * position[2];
        printf("dx = %lf \n", speed[0]);
        printf("dy = %lf \n", speed[1]);
        printf("dz = %lf \n", speed[2]);
	
	/*input : incrément*/
	increment(dt);
	printf("%lf \n", dt);
	/*input : temps d'arret Tmax*/
	break_time(tmax);
	printf("%lf \n", tmax);	

	/*calcul et affichage de la position x y z entre t = 0 et Tmax*/
        /*for(i = dt; i <= tmax; i += dt){*/;
	fprintf(f, "%lf %lf     %lf     %lf\n", i, position[0], position[1], position[2]);
	i = dt;
	do{
                xt = position[0] + (cste[0] * ( position[1] - position[0])) * dt;
                yt = position[1] + (position[0] * (cste[1] - position[2]) - position[1]) * dt;
                zt = position[2] + (position[0] * position[1] - cste[2] * position[2]) * dt;
		position[0] = xt;
    		position[1] = yt;
    		position[2] = zt;
         	printf("temps		x		y		z\n");
	 	printf("%lf	%lf      %lf      %lf\n", i, position[0], position[1], position[2]);
		fprintf(f, "%lf	%lf	%lf	%lf\n", i, position[0], position[1], position[2]);
		i += dt;
	}while(i <= tmax);
	
	/*fermer le ficher lorenz.dat*/
	fclose(f);
	
	return 0;
}
