//
// Created by baddi on 11/5/2024.
//
#include "iostream"
#include "string"
#define MAX 30
using namespace std;

class volante{
    int nombre_ailes;

public:
    volante(int n);
    ~volante();
    void affiche();
};

volante::volante(int n): nombre_ailes(n){}
volante::~volante(){
}
void volante::affiche(){
cout << " nombre_ailes : " << nombre_ailes << endl;
}

class animal{
    int nombre_pattes;
    char type_pelage[MAX];

public:
    animal(int n, char * type_pelage);
    ~animal();
    void affiche();
};

animal::animal(int n, char * tp): nombre_pattes(n){
    strcpy(type_pelage, tp);
}
animal::~animal(){
}
void animal::affiche(){
    cout << " nombre_pattes : " << nombre_pattes << endl;
    cout << " type_pelage : " << type_pelage << endl;
}



class oiseau : public volante, public animal{
    int nombre_oeufs;

public:
    oiseau(int n1, int n2, int n3, char * type_pelage);
    ~oiseau();
    void affiche();
};

oiseau::oiseau(int n1, int n2, int n3, char * tp)
: volante(n1), animal(n2,tp){
    nombre_oeufs=n3;
}
oiseau::~oiseau(){
}
void oiseau::affiche(){
    volante::affiche();
    animal::affiche();
    cout << " nombre_oeufs : " << nombre_oeufs << endl;
}

int main(){
    oiseau o(2,3,4,"oiseau");
    o.affiche();
    return 0;
}