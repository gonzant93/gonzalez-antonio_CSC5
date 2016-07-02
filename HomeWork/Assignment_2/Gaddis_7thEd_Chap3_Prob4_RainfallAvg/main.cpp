/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 29, 2016, 2:10 PM
 * Purpose: Rainfall Avg 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//Formatting Library
#include <string>
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
        string months;// Months
    int amtR1,amtR2,amtR3; // Amount of rainfall in inches
    float avg;
    
    
    //Input data
    cout<<"Enter Name of Months"<<endl;
    getline(cin, months);
    cout<<"Amount of Rainfall (in inches) for "<<months<<endl;
    cin>>amtR1,cin>>amtR2,cin>>amtR3;
    
    //Process data
    avg=(amtR1+amtR2+amtR3)/3.0f;
    
    //Output data
    cout<<setprecision(2)<<fixed;
    cout<<"The average rain fall for "<< months <<" is "<<avg
            <<" inches"<<endl;
    
    //Exit Stage Right
    return 0;
}


