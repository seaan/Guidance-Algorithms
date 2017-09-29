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
int main(void) {
    float latitude, longitude;                      //Latitude and longitude input values. This will simulate our incoming GPS data
    Path p1;                                        //Path struct
    
    p1.current_lat = 0;                            //hard code in the values for now
    p1.current_long = 0;
    p1.target_lat = 50;
    p1.target_long = 50;

    Pathfinder(&p1);                                //Passing the p1 address to the pointer in the Pathfinder function, so we can access and change all of the members of p1.
    printf("Your path vector is long: %f, lat: %f\nDegrees:%lf\n", p1.lat_vec, p1.long_vec,p1.degrees);
    
    
    return 0;
}

