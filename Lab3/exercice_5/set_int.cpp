//
// Created by baddi on 3/4/2024.
//
#include "set_int.h"

set_int::set_int(int m){
    val_set = new int[max_element=m];
    nmbr_element=0;
}
void set_int::ajoute(int val){
if(!apartient(val) && (nmbr_element<max_element))
    val_set[nmbr_element++]=val;
}
bool set_int::apartient(int val){
int i=0;
while(i<nmbr_element && (val_set[i] != val))
    i++;
return i<nmbr_element;
}
int set_int::cardinal(){
return nmbr_element;
}
set_int::~set_int(){
delete val_set;
}


int main(){
    set_int s;
    cout << "entrer 20 element " << endl;
    int val;
    for(int i=0; i<20;i++){
        cin >> val;
        s.ajoute(val);
    }
    cout << "il y a : " << s.cardinal() << " element diff"<< endl;
    cout << " la valeur 4 exist ou non " << s.apartient(4) << endl;
};