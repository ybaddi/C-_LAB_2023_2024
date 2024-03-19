//
// Created by baddi on 11/3/2024.
//

/*
 */

#include <iostream>

using namespace std;

int main(){
   int n;
cout << "Entrer la valeur de n" << endl;
cin >> n;
int tmp =n;
int somme =0;
while (tmp>0){
    somme += tmp%10;
    tmp /= 10;
}

cout << "la somme est " << somme;

}