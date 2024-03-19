//
// Created by baddi on 18/3/2024.
//

#include "point.h"
#include "iostream"
#include "cmath"

using namespace std;

point::point (float a,float b){
   x=a;
   y=b;
}
void point::deplace(float a, float b){
    x= x+a;
    y = y+b;
}
void point::affiche(){
    cout<< " mes cooordonnee sont : " << x << " et "<< y << endl;
}


float point::abscisse(){
    return x;
}
float point::ordonnee(){
    return y;
}
void point::homothetie(float rapport){
      x *= rapport;
      y *= rapport;
}
void point::rotation(float angle){
    float a =  x * cos(angle) - y* sin(angle);
    float b= x * sin(angle) + y * cos(angle);
    x=a;
    y =b;
}
float point::rho(){
    return sqrt(x*x + y*y);

}
float point::theta(){
    return ::atan2(y,x);
}