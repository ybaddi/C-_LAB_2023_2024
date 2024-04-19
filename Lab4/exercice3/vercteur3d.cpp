//
// Created by baddi on 19/4/2024.
//
#include "iostream"

using namespace std;

class vecteur3d {
    float v[3] ; public :
    vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0) {
        v[0] = c1; v[1]=c2; v[2]=c3;
    }

    float & operator [] (int);
};

float & vecteur3d::operator [] (int i){
    if( (i<0) || (i>2) ) i= 0;
    return  v[i];

}