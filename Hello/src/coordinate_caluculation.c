/*
 * coordinate_caluculation.c
 *
 *  Created on: 2021/02/15
 *      Author: seiya
 */

#include <stdio.h>

typedef struct{
    float x;
    float y;
}Vector2D;

void coordinate_caluculation(){
    Vector2D v1,v2;
    printf("v1.x=");
    fflush(stdout);
    scanf("%f",&(v1.x));
    printf("v1.y=");
    fflush(stdout);
    scanf("%f",&(v1.y));
    printf("v2.x=");
    fflush(stdout);
    scanf("%f",&(v2.x));
    printf("v2.y=");
    fflush(stdout);
    scanf("%f",&(v2.y));
    printf("(%f,%f) + (%f,%f)=(%f,%f)\n",v1.x,v1.y,v2.x,v2.y,(v1.x + v2.x),(v1.y + v2.y));
    printf("(%f,%f) - (%f,%f)=(%f,%f)\n",v1.x,v1.y,v2.x,v2.y,(v1.x - v2.x),(v1.y - v2.y));

}
