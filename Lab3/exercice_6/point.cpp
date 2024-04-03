//
// Created by baddi on 3/4/2024.
//

#include "iostream"
using namespace std;
class point
{ int x, y ;
 public :
    friend void affiche(const point &);
 point (int abs=0, int ord=0)
{
 x = abs ; y = ord ;}
};

void affiche(const point & p){
    cout << " coordonnees : "  << p.x << " " << p.y<< endl;
}

int main(){
    point p(1,5);
    affiche(p);
}
