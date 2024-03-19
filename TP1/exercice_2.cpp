//
// Created by baddi on 8/3/2024.
//
#include "iostream"
#include "cmath"

using namespace std;

int main (){
   int val;
   float somme =0  ;
   do {
      cout << "la valeur de n ";
      cin >> val;
   }while(val <= 0);
   for(int i =1;  i<=val; i++) somme += (float) 1 /i;
   cout << " Somme est :" << somme << "\n";
}

