/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 6, 2016, 6:51 PM
 * Purpose: retirement 
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
    float pv,fv,invRate,depRate,deposit,salary,retSav;
    
    
    
    //Input Data
    cout<<"Input Salary $'s, the the deposit %, interest rate in %";
    cout<<"Years in (yrs)"<<endl;
    cin>>salary>>depRate>>invRate;
    
    //Process the Data
    invRate/=100.0f;//Convert to decimal
    depRate/=100.0f;
    deposit=depRate*salary;
    retSav=salary/invRate;
    fv=pv=0;        //
    
    //Loop to Display the yearly result
    cout<<fixed;
    cout<<"Your Salary =           $"<<setprecision(2)<<salary<<endl;
    cout<<"Yearly Bond Purchase  = $"<<setprecision(2)<<deposit<<endl;
    cout<<"Savings at Retirement = $"<<setprecision(2)<<retSav<<endl;
    cout<<"Table Produced with Investment Rate = "<<setprecision(2)
            <<invRate*100<<"% interest"<<endl;
    cout<<"Year    Date    Savings $ "<<endl;
    int year=0;dateYr=2016;
    do{
        cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+invRate);//
        fv+=deposit;
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to the nearest penny
        year++;
        dateYr++;
    }while(fv<retSav);
    cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
    
    //Output the processed Data
  
    
    //Exit Stage Right!
    return 0;
}