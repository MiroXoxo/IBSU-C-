#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Input A Number To See If It's Even Or Odd: ";
    cin >> a;
    cout << endl;
    int result=a%2;
    if(result==0){
        cout << "The Number " << a << " is Even";
    }
    else{
        cout << "The Number " << a << " is Odd";
    }
}
