/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 5, 2016, 6:51 PM
 * Purpose:  Phone Charges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int minutes;
    float hrsMin;
    int hrs,min;
    float charge;
    
    //Input Data
    do {
        cout<< " Input the time at which the phone call starts"<<endl;
        cout<<"Format 00.00 to 23.59 -> hrs.min"<<endl;
        cin>>hrsMin;
        hrs=hrsMin;
        min=(hrsMin-hrs)*100;
    }while (hrs<0||hrs>23||min<0||min>59); 
    cout<<"Input the minutes on the phone"<<endl;
    cin>>minutes;
    
    //Process the Data
    if (hrs>=0&&hrs<=6){
        charge=.12*minutes;
    }else if (hrs>=7&&hrs<=18||hrs==19&&min==0){
        charge=.55*minutes;
    }else {
        charge=.35*minutes;
    }
    
   
    //Output the processed Data
    cout<<"The phone call started at " <<hrs<<"t"<<min<<endl;
    cout<<" It lasted for "<<minutes<<"(mins)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"the total charges = $"<<charge<<endl;
    
    //Exit Stage Right!
    return 0;
}