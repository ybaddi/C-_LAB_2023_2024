//
// Created by baddi on 18/3/2024.
//

#include "iostream"
#include "point.cpp"
using namespace std;



int main (int argc, char**argv){
    point p(2.5, 4.6);
    cout << "les coordonne de p sont : x = " <<p.abs() << " et y = " << p.ord()<< endl;
    p.deplace(2.5,3.4);
    cout << "les coordonne de p sont : x = " <<p.abs() << " et y = " << p.ord()<< endl;
}
