#include <stdio.h>
#include "input.h"
#include "calcul.h"
#include "gnuplot.h"

/*main function : Lorenz system */
int main(int argc, char *argv[]){
	/*initialiser toutes les variables*/
	printf("****************init : lorenz system***************************\n");
	double position[3];
	double speed[3];
	double sigma, rho, beta;
	double dt;
	double tmax;
        double i = 0;
	double speed_t[3];

	/*input : coordonnées initiales*/
	coordinates(position);

	/*input : constantes σ, ρ, β*/
	constants(&sigma, &rho, &beta);
	
	/*calcul et affichage de la vitesse dx dy dz*/
	vitesse(speed, position, &sigma, &rho, &beta);
	
	/*input : incrément*/
	increment(&dt);

	/*input : temps d'arret Tmax*/
	break_time(&tmax, &dt);
	
	/*display : les coordonnées qui seront stocker dans lorenz.dat*/
	printf("temps           x               y               z\n");
	printf("%lf     %lf      %lf      %lf\n", i, position[0], position[1], position[2]);
	
	/*initialisation du fichier, update position, ecrire dans le fichier*/
	FILE *f;
        f = fopen("lorenz.dat", "w+");
	fprintf(f, "%lf %lf     %lf     %lf\n", i, position[0], position[1], position[2]);
	for(i = dt;i <= tmax + dt; i += dt){
		vitesse_t(speed_t, speed, position, &sigma, &rho, &beta, &dt);
		printf("temps           x               y               z\n");
        	printf("%lf     %lf      %lf      %lf\n", i, position[0], position[1], position[2]);
		fprintf(f, "%lf %lf     %lf     %lf\n", i, position[0], position[1], position[2]);
	}
	
	/*fermer le ficher lorenz.dat*/
	fclose(f);
	
	/*lunch gnuplot from main.c*/
	gnuplot();
	
	printf("***************************end**********************************\n");

	return 0;
}
