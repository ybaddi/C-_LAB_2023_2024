//
// Created by baddi on 18/3/2024.
//

#include "iostream"
#include "point.cpp"
using namespace std;



int main (int argc, char**argv){
    point p(2.5, 4.6);
    p.affiche();
    p.rotation(45.45);
    p.affiche();
    p.homothetie(4.5);
    p.affiche();
    p.deplace(2.5,3.4);
    p.affiche();
    cout << p.rho()<< endl;
    cout << p.theta()<< endl;
    cout << p.abscisse()<< endl;
    cout << p.ordonnee()<< endl;
}
