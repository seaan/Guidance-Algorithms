/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pathfinder.h"
#include <math.h>

#define PI 3.14159265359

int Pathfinder(Path *path){
    /*float magnitude;
    float lat_uvec, long_uvec;
     */
    
    /* First find the vector between our coordinates */
    path->lat_vec = path->target_lat - path->current_lat;
    path->long_vec = path->target_long - path->current_long;
    
    /* Find the unit vector *//*
    magnitude = sqrt(path->lat_vec*path->lat_vec + path->long_vec*path->long_vec);
    lat_uvec = path->lat_vec/magnitude;
    long_uvec = path->long_vec/magnitude;
      */
    
    path->degrees = atan((path->long_vec)/(path->lat_vec)) * (180/PI);
}