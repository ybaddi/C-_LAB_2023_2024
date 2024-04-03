//
// Created by baddi on 3/4/2024.
//
#include "set_int.h"
set_int::set_int(int m){
val_set = new int[max_ele=m];
nmbr_ele=0;
}
void set_int::ajoute(int val){
if(!apartient(val) && (nmbr_ele<max_ele))
    val_set[nmbr_ele++]=val;
}
bool set_int::apartient(int val){
    int i=0;
while(i<nmbr_ele && (val_set[i] != val))i++;
    return (i<nmbr_ele);
}
int set_int::cardianl(){
return nmbr_ele;
};

int main(){
   set_int s;
   cout << "veuillez entrer 20 element " << endl;
   int val;
   for(int i=0; i<20; i++){
       cin >>  val;
       s.ajoute(val);
   }
   cout << " le cardial est " << s.cardianl()<< endl;
   cout << " la valeur 4 apartient ou non "<< s.apartient(4) << endl;
}