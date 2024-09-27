#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout << "Input Three Numbers To Find The Largest" << endl;
    cout << endl << "Input The First Number: ";
    cin >> a;
    cout << endl << "Input The Second Number: ";
    cin >> b;
    cout << endl << "Input The Last Number: ";
    cin >> c;
    if(a>b&&b>c){
        cout << endl << "The Largest Number Is " << a << endl;
        }
    else if(b>a&&a>c){
        cout << endl << "The Largest Number Is " << b << endl;
    }
    else if(c>a&&a>b){
        cout << endl << "The Largest Number Is " << c << endl;
    }
}