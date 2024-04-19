//
// Created by baddi on 19/4/2024.
//
#include "iostream"

using namespace std;

class vecteur3d
{
    float x,y,z;
public :
    vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
    { x = c1 ; y = c2 ; z = c3 ;
    }

    int operator == (vecteur3d);
    int operator != (vecteur3d);
};

int vecteur3d::operator == (vecteur3d v){
    if((v.x == x) && (v.y == y)  && (v.z == z))return 1;
    else return 0;
}
int vecteur3d::operator != (vecteur3d v){
   return       ! ( (*this) == v) ; // *this != v ;
}


int main(){
    vecteur3d v1(3,4,5) ,
    v2(4,5,6) ,
    v3(3,4,5);

    cout << "v1==v2" << "  ==>  " << (v1==v2) << endl;
    cout << "v1!=v2" <<  "  ==>  " <<(v1!=v2) << endl;

    cout << "v1==v3" <<  "  ==>  " <<(v1==v3) << endl;
    cout << "v1!=v3" <<  "  ==>  " <<(v1!=v3) << endl;

}