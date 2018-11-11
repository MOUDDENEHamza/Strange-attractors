#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]){
	/*initialiser toutes les variables*/
	float x, y, z;
	float dx, dy, dz;
	float sigma, ro, beta;
	float dt;
	float tmax;
        float i = 0;

	/*initialiser et ouvrir et ecrire dans le fichier lorenz.txt*/
	FILE *f;
	f = fopen("lorenz.txt", "w+");
	/*fputs("temps		x		y		z\n", f);*/


	/*input : position x y z*/
	printf("entrez votre coordonnée x : ");
	scanf("%f", &x);
	printf("entrez votre coordonnée y : ");
        scanf("%f", &y);
	printf("entrez votre coordonnée z : ");
        scanf("%f", &z);
	
	/*input : paramètre σ ρ β*/
	printf("entrez votre paramètre σ : ");
        scanf("%f", &sigma);
        printf("entrez votre paramètre ρ : ");
        scanf("%f", &ro);
        printf("entrez votre paramétre β : ");
        scanf("%f", &beta);
	
	/*calcul et affichage de la vitesse dx dy dz*/
	dx = sigma * (y - x);
        dy = x * (ro - z) -y;
        dz = x * y - beta * z;
        printf("dx = %f \n", dx);
        printf("dy = %f \n", dy);
        printf("dz = %f \n", dz);
	
	/*input : incrément*/
	printf("entrez votre incrément dt : ");
        scanf("%f", &dt);
	
	/*input : temps d'arret Tmax*/
	printf("entrez votre temps d'arret Tmax : ");
        scanf("%f", &tmax);
	
	/*calcul et affichage de la position x y z entre t = 0 et Tmax*/
        for(i; i <= tmax; i = i + dt){

                x = sigma * ( y * i -  pow(i, 2) / 2);
                y = x * (ro - z) * i - pow(i, 2) / 2;
                z = x * y * i - (beta * pow(i, 2)) / 2;
         	printf("temps		x		y		z\n");
	 	printf("%f	%f      %f      %f\n", i, x, y, z);
		fprintf(f, "%f	%f	%f	%f\n", i, x, y, z);
	}
	
	/*fermer le ficher lorenz.txt*/
	fclose(f);
	
	return 0;
}
