//
// Created by baddi on 11/3/2024.
//

/* Ecrire un programme qui demande à l’utilisateur de taper le prix HT d’un kilo de tomates, le nombre de
kilos de tomates achetés, le taux de TVA (Exemple 10%,20%,...). Le programme affiche alors le prix TTC des
marchandises.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int somme =0;
cout << "Entrer la valeur de n" << endl;
cin >> n;

string str = to_string(n);
for(int i =0; i< str.length(); i++){
  somme += ((int)str[i]) - 48  ;
}
cout << " somme est " << somme << endl;

}