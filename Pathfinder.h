/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pathfinder.h
 * Author: Sean Widmier
 *
 * Created on September 29, 2017, 10:31 AM
 */

#ifndef PATHFINDER_H
#define PATHFINDER_H

typedef struct Coordinate{
    float degrees, minutes, seconds, decimal;
} Coordinate;

typedef struct Path{
    Coordinate current_lat, current_long;
    Coordinate target_lat, target_long;
    float lat_vec, long_vec;
    double angle;
} Path;

int Pathfinder(Path *path);
void coord_dmsToDec(Coordinate *c1);
void path_dmsToDec(Path *p1);


#endif /* PATHFINDER_H */

