//
// Created by baddi on 11/3/2024.
//
#include <iostream>

using namespace std;
int fab(int n){
    if(n==1 || n==2) return 1;
   else  return fab(n-1) + fab(n-2);
}

int main(){
    int x ;
    cout << "Entrer la valeur de x " << endl;
    cin >> x;
    std::cout << "fab de " << x << " est " << fab(x) << std::endl;
}