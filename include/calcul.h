#ifndef _CALCUL_H_
#define _CALCUL_H_

/*calcul et affichage de la vitesse dx dy dz*/
void vitesse(double speed[], double position[], double *sigma, double *rho, double *beta);

/*mettre à jour la vitesse entre t=0 et Tmax*/
void vitesse_t(double speed_t[], double speed[], double position[], double *sigma, double *rho, double *beta, double *dt);

#endif
