#include <iostream>

using namespace std;

int main(){
  float firstTerm;
  float commonRatio;
  int numberOfTerms;
  cout << "Enter The Values Of The Following Items To Find Out The Sum Of Geometric Progression" << endl << endl;
  cout << "Enter The Value Of The First Term: ";
  cin >> firstTerm;
  cout << "Enter The Value Of The Common Ratio: ";
  cin >> commonRatio;
  cout << "Enter The Value OF The Number Of Terms: ";
  cin >> numberOfTerms;
  int i=1;
  float sumGeometricProgression=firstTerm;
  for(i;i<numberOfTerms;i++){
    firstTerm*=commonRatio;
    sumGeometricProgression+=firstTerm;
  }
  cout << "The Sum Of Geometric Progression Is: "<< sumGeometricProgression;
}