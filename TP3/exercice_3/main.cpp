//
// Created by baddi on 18/3/2024.
//

#include "iostream"
#include "point.cpp"
using namespace std;



int main (int argc, char**argv){
    point p(2.5, 4.6);
    p.affiche();
    p.deplace(2.5,3.4);
    p.affiche();
}
