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
void point::affiche(){
    cout<< " mes cooordonnee sont : " << x << " et "<< y << endl;
}


