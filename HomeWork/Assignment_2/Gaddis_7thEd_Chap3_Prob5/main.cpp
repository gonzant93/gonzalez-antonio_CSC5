/*
* File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 27, 2016, 7:34 PM
 * Purpose:  Average Five test scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
#include <iomanip>   //Manipulator
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string movNam;//Name of the movie to be outputted
    float adtTik, chiTik, grosInc, netInc, amtDis; 
    
    //Process the Data
    cout<<"Enter the name of the movie: "<<endl;
    getline(cin, movNam);
    
    cout<<"Enter the amount of adult tickets sold: "<<endl;
    cin>>adtTik;
    
    cout<<"Enter the amount of child tickets sold: "<<endl;
    cin>>chiTik;
    
    grosInc = adtTik*6.00f + chiTik*3.00f;//Calculation of adult and child tickets
    netInc = grosInc*.20f;//Calculation of the net income
    amtDis = grosInc - netInc;//Amount of money paid to the distributer
    
    
    //Output the processed Data
    
    cout<<"The name of the movie is "<<setw(8)<<movNam<<endl;
    cout<<"The amount of adult tickets sold is "<<setw(8)<<adtTik<<endl;
    cout<<"The amount of child tickets sold is "<<setw(8)<<chiTik<<endl;
    cout<<setprecision(2)<<fixed<<"The gross income total is          $"<<setw(8)<<grosInc<<endl;
    cout<<setprecision(2)<<fixed<<"The net box office profit is       $"<<setw(8)<<netInc<<endl;
    cout<<setprecision(2)<<fixed<<"The amount paid to distributer is  $"<<setw(8)<<amtDis<<endl;
    //Exit Stage Right!
    return 0;
}