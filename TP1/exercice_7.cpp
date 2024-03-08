//
// Created by baddi on 8/3/2024.
//
#include "iostream"
#include "cmath"

using namespace std;

int main (){
   double val;
   do {
       cout << " donnez un nombre positif : ";
       cin >> val;
       if (val < 0) { cout << "svp positif"<< "\n";}
       if (val == 0) return 0;
       cout << "sa racine carrée est : " << sqrt(val) << "\n";
   }while(val);
}

