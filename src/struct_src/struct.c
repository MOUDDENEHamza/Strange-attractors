#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

/*this function will handle the point struct by creating a dynamic allocation*/
void handle_p(void) {
    
    p = malloc(sizeof(struct point));
    p->position = malloc(3 * sizeof(double *));
    p->speed = malloc(3 * sizeof(double *));
    p->speed_t = malloc(3 * sizeof(double *));
    
    return;
}

/*this function will handle the parameter struct by creating a dynamic allocation*/
void handle_para(void) {
    
    para = malloc(sizeof(struct parameter));
    para->parameter = malloc(6 * sizeof(double *));
    
    return;
}
