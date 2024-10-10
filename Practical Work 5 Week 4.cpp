#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c,D;
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "Input a,b,c To Solve The Equation" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    D=(b*b)-4*a*c;
    float X,X1,X2;
    X=(-b)/(2*a);
    X1=(-b-sqrt(D))/(2*a);
    X2=(-b+sqrt(D))/(2*a);
    if(D<0){
        cout << endl << "This Equation Has No X";
    }
    else if(D==0){
        cout << endl << "This Equations X=" << X;
    }
    else if(D>0){
        cout << endl << "This Equations X1=" << X1 << " And X2=" << X2; 
    }
}