/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 20, 2016, 12:51 PM
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void calculateRetail(float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float wValue;
    float mPer;
    
    //Input Data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Enter the wholesale of value (in $) of the item "<<endl;
    cin>>wValue;
    cout<<"Now enter the item's markup percentage to find it's retail value "<<endl;
    cin>>mPer;
   
    
    //Process the Data
    calculateRetail(wValue,mPer);
    return 0;
    
}
    void calculateRetail(float wValue, float mPer)
    {
        cout<<"Retail Value =$"<<((wValue*(mPer/100.0f))+wValue)<<endl;
    }
    
