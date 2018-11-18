#ifndef _INPUT_H_
#define _INPUT_H_

/*input : coordonnees x, y, z*/
void coordinates(double position[]){
	printf("entrez votre coordonnée x : ");
        scanf("%lf", &position[0]);
        printf("entrez votre coordonnée y : ");
        scanf("%lf", &position[1]);
        printf("entrez votre coordonnée z : ");
        scanf("%lf", &position[2]);
}

/*input : constantes σ, ρ, β*/ 
void  constants(double cste[]){
	printf("entrez votre σ : ");
	scanf("%lf", &cste[0]);
        printf("entrez votre ρ : ");
        scanf("%lf", &cste[1]);
        printf("entrez votre β : ");
        scanf("%lf", &cste[2]);
}

/*input : incrément*/
void increment(double dt){
        printf("entrez votre incrément dt : ");        
	scanf("%lf", &dt);
}

/*input : temps d'arret Tmax*/
void break_time(double tmax){
        printf("entrez votre temps d'arret Tmax : ");
	scanf("%lf", &tmax);
}

#endif
