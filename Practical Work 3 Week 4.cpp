#include <iostream>
using namespace std;

int main(){
    float grade;
    cout << "Input Your Score To Get Your Grade: ";
    cin >> grade;
    if(grade>100){
        cout << endl << "Please Enter Your Real Grade";
    }
    else if(grade>90){
        cout << endl << "Your Grade: A";
    }
    else if(grade>80){
        cout << endl << "Your Grade: B";
    }
    else if(grade>70){
        cout << endl << "Your Grade: C";
    }
    else if(grade>60){
        cout << endl << "Your Grade: D";
    }
    else if(grade>50){
        cout << endl << "Your Grade: E";
    }
    else{
        cout << endl << "Your Grade: F";
    }
}
