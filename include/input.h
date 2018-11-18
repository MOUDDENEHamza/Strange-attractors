#ifndef _INPUT_H_
#define _INPUT_H_

#define sigma 10
#define rho 28
#define beta 8.0 / 3.0


void coordinates(double position[]){
	printf("entrez votre coordonnée x : ");
        scanf("%lf", &position[0]);
        printf("entrez votre coordonnée y : ");
        scanf("%lf", &position[1]);
        printf("entrez votre coordonnée z : ");
        scanf("%lf", &position[2]);
}

#endif
