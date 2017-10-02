/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pathfinder.h"
#include <math.h>

#define PI 3.14159265359

/* Function that accepts a path input, computes the vector between the target and current point, then finds the angle between them.*/
int Pathfinder(Path *path){
    path_dmsToDec(path);                                                        //Convert the coordinates to decimal to make it easier to find the vector and angle.
    
    /* First find the vector between our coordinates */
    path->lat_vec = path->lat_final.decimal - path->lat_initial.decimal;
    path->long_vec = path->long_final.decimal - path->long_initial.decimal;
    
    /* Compute the angle of the vector to find our bearing */
    path->angle = atan2(path->long_vec,path->lat_vec) * 180/PI;                 //atan returns in radians, * 180/PI is converting radians to degrees.
}

/* Function to convert a coordinate in degrees/minutes/seconds to decimal. */
void coord_dmsToDec(Coordinate *c1){
    c1->decimal = c1->degrees + c1->minutes/60 + c1->seconds/3600;
}

/* Function to convert a  path's current and target coordinates to decimal.*/
void path_dmsToDec(Path *p1){
    coord_dmsToDec(&p1->lat_initial);
    coord_dmsToDec(&p1->long_initial);
    coord_dmsToDec(&p1->lat_final);
    coord_dmsToDec(&p1->long_final);
}