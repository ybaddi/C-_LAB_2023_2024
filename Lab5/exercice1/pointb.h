//
// Created by baddi on 20/4/2024.
//
#include "point.h"
#include "math.h"

class pointb : public point{
public:
    pointb(float , float);
     float rho();
};

pointb::pointb(float c1, float c2){
   x=c1 ; y=c2;
}
float pointb::rho(){
    return sqrt( x * abs() + ord() * ord() )
};


// Reponse question b