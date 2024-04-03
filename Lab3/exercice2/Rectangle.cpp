//
// Created by baddi on 25/3/2024.
//

#include "Rectangle.h"
#include "iostream"


using namespace std;


Rectangle::Rectangle():
longeur(0.0), largeur(0.0){
    cout << "constructeur 1" << endl;

}
Rectangle::Rectangle(double l1,double l2):
        longeur(l1), largeur(l2){
    cout << "constructeur 2" << endl;

}
Rectangle::Rectangle(double l):
        longeur(l), largeur(0.0){
    cout << "constructeur 3" << endl;

}
Rectangle::~Rectangle(){
    cout << "distructeur " << longeur << " " << largeur << endl;
}

int main(){
    Rectangle rec1;
    Rectangle rec2 (5.0,6.0);
    Rectangle rec3(6.0);
}