//
// Created by baddi on 18/3/2024.
//

#include "point.h"
#include "iostream"

using namespace std;

point::point (float a,float b){
   x=a;
   y=b;
}
void point::deplace(float a, float b){
    x= x+a;
    y = y+b;
}

float point::abs(){
    return x;
}

float point::ord(){
    return y;
}


