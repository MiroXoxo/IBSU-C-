#include <iostream>
using namespace std;

int main(){
    float number1,number2,result;
    char operation;
    cout << "CALCULATOR" << endl;
    cout << "Enter Number, Arithmetic Operation('+','-','*','/') And Another Number To Get The Result" << endl;
    cin >> number1 >> operation >> number2;
    switch(operation){
    case '+':
    result=number1+number2;
    break;
    case '-':
    result=number1-number2;
    break;
    case '*':
    result=number1*number2;
    break;
    case '/':
    if(number2!=0){
        result=number1/number2;
    }
    else{
        cout << endl << "Error: Division by zero is not allowed" << endl;
        return 1;
    }
    break;
    default:
    cout << endl << "Please Follow The Instrucions And Try Again";
    return 1;
    break;
    }
    cout << endl << result;
}