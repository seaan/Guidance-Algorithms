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

typedef struct Path{
    float current_lat, current_long;
    float target_lat, target_long;
    float lat_vec, long_vec;
    double degrees;
} Path;

int Pathfinder(Path *path);


#endif /* PATHFINDER_H */

