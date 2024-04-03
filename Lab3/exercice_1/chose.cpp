//
// Created by baddi on 25/3/2024.
//

#include "iostream"

using  namespace std;
class chose{
public:
    chose();
    ~chose();
};

chose::chose(){
    cout << "reation d’un objet de type Chose \n";
}
chose::~chose(){
    cout << "Destruction de l’objet de type Chose \n";
}

int main (){
//    chose x;
//    cout << "bonjour \n";
    chose *x = new chose();
}