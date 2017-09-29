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
    
    assignCoord(&p1.current_lat,0,0,0);             //hard code in the values for now
    assignCoord(&p1.current_long,0,0,0);
    assignCoord(&p1.target_lat,50,50,50);
    assignCoord(&p1.target_long,25,25,25);

    Pathfinder(&p1);                                //Passing the p1 address to the pointer in the Pathfinder function, so we can access and change all of the members of p1.
    printf("Your path vector for current dec coord (%f,%f) to target (%f,%f) is long: %f, lat: %f\n", p1.current_lat.decimal, p1.current_long.decimal,p1.target_lat.decimal,p1.target_long.decimal,p1.lat_vec, p1.long_vec,p1.angle);
    
    return 0;
}