//
// Created by baddi on 3/4/2024.
//

#include "iostream"

using namespace std;

class set_int{
    int * val_set;
    int max_element;
    int nmbr_element;

public:
    set_int(int =20);
    void ajoute(int);
    bool apartient(int);
    int cardinal();
    ~set_int();
};