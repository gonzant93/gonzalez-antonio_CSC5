/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 23, 2016, 2:10 PM
 * Purpose: First Program 
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
    string mnth1,mnth2,mnth3;// Months
    int amtR1,amtR2,amtR3; // Amount of rainfall in inches
    float avg;
    
    
    //Input data
    cout<<"Enter Name of Month 1"<<endl;
    cin>>mnth1;
    cout<<"Enter Name of Month 2"<<endl;
    cin>>mnth2;
    cout<<"Enter Name of Month 3"<<endl;
    cin>>mnth3;
    cout<<"Amount of Rainfall (in inches) for Month 1"<<endl;
    cin>>amtR1;
    cout<<"Amount of Rainfall (in inches) for Month 2"<<endl;
    cin>>amtR2;
    cout<<"Amount of Rainfall (in inches) for Month 3"<<endl;
    cin>>amtR3;

    
    //Process data
    avg=(amtR1+amtR2+amtR3)/3.0f;
    
    //Output data
    cout<<setprecision(4);
    cout<<"The average rain fall for "<<mnth1<<" "
        <<mnth2<<" "<<mnth3<<" is "<<avg<<endl;
    
    //Exit Stage Right
    return 0;
}


