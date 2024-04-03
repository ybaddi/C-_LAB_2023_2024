//
// Created by baddi on 3/4/2024.
//
#include "iostream"
#include "cstdarg"

using namespace std;

class Point{
private :
    static int cmp;
    int num;
public:
    Point(){
       cmp++;
        num=cmp;
        cout << "point numero : " << num << endl;
    }

    int getcmp(){
        return cmp;
    }

    ~Point(){
        cout << "point numero : " << num << " deleted" << endl;
    }
};

int Point::cmp=0;

//int sum(int x, ...){
//    va_list args;
//    int res = x;
//    va_start(args,x);
//    int arg=va_arg(args,int);
//    while(arg != -1){
//        res +=arg;
//        arg=va_arg(args,int);
//    }
//    va_end(args);
//    return res;
//}



int main(){
   Point e;
//   Point e2, e3,e4;
    cout << e.getcmp() << endl;
   Point * points = new Point[4];
   cout << e.getcmp() << endl;
    cout << points[3].getcmp() << endl;
//    cout << sum(1,2,3,4,5,6,7,8,9,10,-1)<< endl;
   delete[] points;
    return 0;
}