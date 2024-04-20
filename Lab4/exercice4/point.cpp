//
// Created by baddi on 20/4/2024.
//
#include "iostream"

using namespace std;

class point
{ int x,y;
public :
    point (int abs=0, int ord=0)
    { x = abs ; y = ord ;
    }
     operator int();
};

point::operator int(){
    return x;
}

int main (){
    point p(2,3);
    int x = (int)p;

    cout << x << endl;

    return 0;
}