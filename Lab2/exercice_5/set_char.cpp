//
// Created by baddi on 18/3/2024.
//

#include "set_char.h"


set_char::set_char(){
    for(int i=0 ; i<MAX_CHAR; i++) ensemble[i]=0;
}
void set_char::ajouter (char c){
   ensemble[c]=1;
}
int set_char::apartient(char c){
return ensemble[c];
}
int set_char::cardinal(){
    int sum;
    for(int i=0 ; i<MAX_CHAR; i++){
        if(ensemble[i]) sum++;
    }
}