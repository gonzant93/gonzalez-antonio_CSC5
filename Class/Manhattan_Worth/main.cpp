/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July6, 2016, 6:51 PM
 * Purpose:  First Program
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,fv,iRate;
    int nYears;
    
    //Input Data
    cout<<"Input the present value in $, interest rate in %, number of ";
    cout<<"Years in (yrs)"<<endl;
    cin>>pv>>iRate>>nYears;
    
    //Process the Data
    iRate/=100.0f;//Convert to decimal
    fv=pv;        //
    
    //Loop to Display the yearly result
    cout<<fixed;
    cout<<"Year    Date    Savings $ "<<endl;
    for(int year=0,dateYr=2016;year<=nYears;year++,dateYr++){
        cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+iRate);//
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to the nearest penny
    }
    
    //Output the processed Data
  
    
    //Exit Stage Right!
    return 0;
}