#include <iostream>
using namespace std;
int main(){
    float budget,amount,pricePerKg,averageWeight;
    cout << "Input Your Budget: ";
    cin >> budget;
    cout << "Input Price Per Kilogram Of Watermelons: ";
    cin >> pricePerKg;
    cout << "Input The Amount Of Watermelons: ";
    cin >> amount;
    cout << "Input The Average Weight Of Watermelons: ";
    cin >> averageWeight; 
    float result=budget-(pricePerKg*averageWeight*amount);
    if(result<0){
        cout << "You Are Under Budget By " << result;
    }
    else if(result>0){
        cout << "Your Budget Is More Than Enough" << endl;
        cout << "Money Left: " << result;
    }
    else if(result==0){
        cout << "Your Budget Is Exactly Enough";
    }
}