/* 
 * File:   main.cpp
 * Author: Sean Widmier
 *
 * Created on September 28, 2017, 9:49 PM
 */

#include <stdio.h>
#include "Pathfinder.h"

/*
 * 
 */

void assignCoord(Coordinate *c1, float d, float m, float s){
    c1->degrees = d;
    c1->minutes = m;
    c1->seconds = s;
}
int main(void) {
    float latitude, longitude;                      //Latitude and longitude input values. This will simulate our incoming GPS data
    Path p1;                                        //Path struct
    
    assignCoord(&p1.lat_initial,74,0,0);             //hard code in the values for now
    assignCoord(&p1.long_initial,-2,0,0);
    assignCoord(&p1.lat_final,0,0,0);
    assignCoord(&p1.long_final,0,0,0);

    Pathfinder(&p1);                                //Passing the p1 address to the pointer in the Pathfinder function, so we can access and change all of the members of p1.
    printf("Current dec coord (%.2f,%.2f) target coord (%.2f,%.2f)\n", p1.lat_initial.decimal, p1.long_initial.decimal, p1.lat_final.decimal, p1.long_final.decimal);
    printf("Latitude vector:%.2f , Longitude vector:%.2f.\n", p1.lat_vec, p1.long_vec);
    printf("Angle of the vector is: %.2lf\n", p1.angle);
    
    return 0;
}