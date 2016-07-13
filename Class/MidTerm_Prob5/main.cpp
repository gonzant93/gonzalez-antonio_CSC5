/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 13, 2016, 1:37 PM
 * Purpose:  Midterm Prblem 5 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd;//Hours worked
    unsigned short payRate;//$s/hr
    float dblTime=20;//Double Time starts at 20 hours
    float triTime=40;//Triple Time Starts at 40 
    float payChck;//Paycheck in $'s
    
    //Input Data
       cout<<"Hours worked = "<<endl;
       cin>>hrsWrkd;
       cout<<"Pay Rate per hour = $"<<endl;
       cin>>payRate;
   
    //Process the Data
    payChck=hrsWrkd*payRate;
    payChck+=hrsWrkd<dblTime?//Test
             0              ://True
            (hrsWrkd-dblTime)*payRate*1.0f;//False
    payChck+=hrsWrkd<triTime?//Test
             0              ://True
            (hrsWrkd-triTime)*payRate*1.0f;//False
    
    //Output the processed Data
   
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Pay = $"<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}