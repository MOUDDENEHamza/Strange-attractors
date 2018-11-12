#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]){
	/*initialiser toutes les variables*/
	double x, y, z;
	double dx, dy, dz;
	double sigma, ro, beta;
	double dt;
	double tmax;
        double i = 0;
	double xt, yt ,zt;

	/*initialiser et ouvrir et ecrire dans le fichier lorenz.txt*/
	FILE *f;
	f = fopen("lorenz.txt", "w+");
	/*fputs("temps		x		y		z\n", f);*/


	/*input : position x y z*/
	printf("entrez votre coordonnée x : ");
	scanf("%lf", &x);
	printf("entrez votre coordonnée y : ");
        scanf("%lf", &y);
	printf("entrez votre coordonnée z : ");
        scanf("%lf", &z);
	
	/*input : paramètre σ ρ β*/
	printf("entrez votre paramètre σ : ");
        scanf("%lf", &sigma);
        printf("entrez votre paramètre ρ : ");
        scanf("%lf", &ro);
        printf("entrez votre paramétre β : ");
        scanf("%lf", &beta);
	
	/*calcul et affichage de la vitesse dx dy dz*/
	dx = sigma * (y - x);
        dy = x * (ro - z) -y;
        dz = x * y - beta * z;
        printf("dx = %lf \n", dx);
        printf("dy = %lf \n", dy);
        printf("dz = %lf \n", dz);
	
	/*input : incrément*/
	printf("entrez votre incrément dt : ");
        scanf("%lf", &dt);
	
	/*input : temps d'arret Tmax*/
	printf("entrez votre temps d'arret Tmax : ");
        scanf("%lf", &tmax);
	
	/*calcul et affichage de la position x y z entre t = 0 et Tmax*/
        for(i; i <= tmax; i += dt){

                xt = x + (sigma * ( y - x)) * dt;
                yt = y + (x * (ro - z) - y) * dt;
                zt = z + (x * y - beta * z) * dt;
		x = xt;
    		y = yt;
    		z = zt;
         	printf("temps		x		y		z\n");
	 	printf("%lf	%lf      %lf      %lf\n", i, x, y, z);
		fprintf(f, "%lf	%lf	%lf	%lf\n", i, x, y, z);
	}
	
	/*fermer le ficher lorenz.txt*/
	fclose(f);
	
	return 0;
}
