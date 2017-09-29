/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pathfinder.h"
#include <math.h>

#define PI 3.14159265359

int Pathfinder(Path *path){
    float magnitude;
    float lat_uvec, long_uvec;
    
    path_dmsToDec(path);
    
    /* First find the vector between our coordinates */
    path->lat_vec = path->target_lat.decimal - path->current_lat.decimal;
    path->long_vec = path->target_long.decimal - path->current_long.decimal;
    
    /* Find the unit vector */
    magnitude = sqrt(path->lat_vec*path->lat_vec + path->long_vec*path->long_vec);
    path->lat_uvec = path->lat_vec/magnitude;
    path->long_uvec = path->long_vec/magnitude;
}

void coord_dmsToDec(Coordinate *c1){
    c1->decimal = c1->degrees + c1->minutes/60 + c1->seconds/3600;
}

void path_dmsToDec(Path *p1){
    coord_dmsToDec(&p1->current_lat);
    coord_dmsToDec(&p1->current_long);
    coord_dmsToDec(&p1->target_lat);
    coord_dmsToDec(&p1->target_long);
}