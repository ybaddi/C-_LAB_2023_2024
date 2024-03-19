//
// Created by baddi on 11/3/2024.
//

/* Ecrire un programme qui demande à l’utilisateur de taper le prix HT d’un kilo de tomates, le nombre de
kilos de tomates achetés, le taux de TVA (Exemple 10%,20%,...). Le programme affiche alors le prix TTC des
marchandises.
 */

#include <iostream>

using namespace std;

int main(){
    double prix_HT, quentite, taux;
cout << "Entrer le prix hors tax" << endl;
cin >> prix_HT;

    cout << "Entrer la quentite" << endl;
    cin >> quentite;

    cout << "Entrer le taux" << endl;
    cin >> taux;

    cout << " prix TTC est " << prix_HT * quentite * ( 1 + taux/100) << endl;
}