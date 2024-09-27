#include <iostream>
using namespace std;
int main(){
    bool weather,sameDirection;
    float gas,gasMileage,distanceHome,distanceVillage;
    float furtherDistance,closerDistance,resultF,resultC,both,resultB;
    string further,closer;
    float distancePossible=gas/(gasMileage/100);
    cout << "If The Weather Is Good Input '1' Otherwise Inout '0': ";
    cin >> weather;
    if(weather==1){
    cout << "Input The Distance To The Village: ";
    cin >> distanceVillage;
    cout << "Input The Distance To Your Home: ";
    cin >> distanceHome;
    cout << "Input '1' If Your Home And Village Are In The Same Direction Otherwise Input '0': ";
    cin >> sameDirection;
    cout << "Input How Much Gas Is In The Vehicle: ";
    bool villageFurther=distanceVillage>distanceHome;
    if(villageFurther==1){
        further="Village";
        furtherDistance=distanceVillage;
        closer="Home";
        closerDistance=distanceHome;
    }
    else{
        further="Home";
        furtherDistance=distanceHome;
        closer="Village";
        closerDistance=distanceVillage;
    }
    cin >> gas;
    cout << "Input Your Vehicles Gas Mileage (Liters Per 100km): ";
    cin >> gasMileage;
    float distancePossible=gas/(gasMileage/100);
    cout << endl;
    
    resultF=distancePossible-furtherDistance;
    resultC=distancePossible-closerDistance;
    both=closerDistance*2+furtherDistance;
    resultB=distancePossible-both;
    if(sameDirection==1&&resultF>=0){
        cout << "You Made It Both To The " << closer << " and " << further << endl;
        cout << "You Can Travel " << resultF << "Km" << endl;
    }
    else if(sameDirection==1&&resultC>=0){
        cout << "You Made It To " << closer << " And Traveled "<< resultC << "Km more" << endl; 
        cout << "You Are Out Of Gas " << resultF*-1 << "Km Left Till" << further << endl;
    }
    else if(sameDirection==1&&resultC<0){
        cout << "You Made it "<< distancePossible << "Km" << endl;
        cout << "Distance To " << closer << " Left " << resultC*-1 << "Km" << endl;
        cout << "Distance To " << further << " Left " << resultF*-1 << "Km" << endl;
    }
    else if(sameDirection==0&&resultC>0&&resultF>=0){
        if(resultB>=0){
            cout << "You Can Go To " << closer << " Come Back And Make It To " << further << endl;
            cout << "You Can Travel " << resultB << "Km" << endl;
        }
        if(resultB<0){
            cout << "You Can Either Go To " << closer << " Or " << further << endl;
            cout << "You Need " << resultB*-1 << "Km Worth Of Gas More To Go To Both Destinations" << endl;
        }
    }
    else if(sameDirection==0&&resultC>=0){
        cout << "You Can Make It Only To " << closer << " With " << resultC << "Km More To Go" << endl;
        cout << "You Need " << resultF*-1 << "Km Worth Of Gas More To Go to " << further << endl;
        cout << "And " << resultB*-1 << "Km Worth Of Gas More To Go To Both Destinations";
    }
    else if(sameDirection==0&&resultC<0){
        cout << "You Made it "<< distancePossible << "Km" << endl;
        cout << "You Need " << resultC*-1 << "Km Worth Of Gas More To Go to " << closer << endl;
        cout << "You Need " << resultF*-1 << "Km Worth Of Gas More To Go to " << further << endl;
        cout << "You Need " << resultB*-1 << "Km Worth Of Gas More To Go To Both Destinations";
    }
    }
    else{
        cout << "The Weather Is Bad You Can Only Go Home" << endl;
        cout << "Input The Distance To Your Home: ";
        cin >> distanceHome;
        cout << "Input How Much Gas Is In The Vehicle: ";
        cin >> gas;
        cout << "Input Your Vehicles Gas Mileage (Liters Per 100km): ";
        cin >> gasMileage;
        float distancePossible=gas/(gasMileage/100);
        cout << endl;
        if(distanceHome<distancePossible){
            cout << "You Made It To Home" << endl; 
            cout << "You Can Travel " << distancePossible-distanceHome << "Km More";
        }
        else if(distanceHome>distancePossible){
            cout << "You Did Not Make It To Home" << endl;
            cout <<  distanceHome-distancePossible << "Km More Needed To Be Passed";
        }
        else if(distanceHome==distancePossible){
            cout << "You Made It To Home With No Gas Left";
        }
    }
    

}