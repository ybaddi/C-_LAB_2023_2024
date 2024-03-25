//
// Created by baddi on 8/3/2024.
//

#include "iostream"

using namespace std;

int main (){
    int n_10;
    int n_5;
    int n_2;
    int nmb_cas = 0;

    for(n_10=0; n_10<=10; n_10++)
        for(n_5=0; n_5<=20; n_5++)
            for(n_2=0; n_2<=50; n_2++)
              if(2*n_2 + 5*n_5 + 10*n_10 == 100){
                nmb_cas++;
                cout << "1 DH = ";
                if (n_2) cout << n_2 << "X 2c ";
                if (n_5) {
                    if(n_2)  cout << " + " << n_5 << "X 5c ";
                    else cout << n_5 << "X 5c ";
                }
                if (n_10) {
                    if(n_5) cout << " + "  << n_10 << "X 10c ";
                    else cout << " + "  << n_10 << "X 10c ";
                }
                cout << "\n ";
            }
    cout << "nombre de cas est " << nmb_cas << "\n ";

}