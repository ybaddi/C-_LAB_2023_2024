//
// Created by baddi on 18/3/2024.
//

#include "iostream"
#include "cstring"
#include "set_char.cpp"
using namespace std;
int main(){
    char c;
    set_char setchar;
    char word[100];
    cout << "add a set of char" << endl;
    cin >> word;
    for(int i=0 ; i< strlen(word); i++){
        setchar.ajouter(word[i]);
    }
    cout << "contient " << setchar.cardinal() << "caractere" << endl;
    if(setchar.apartient('e')) cout << " le caractere e exist" << endl;
    else cout << "caractere e not exist " << endl;


}