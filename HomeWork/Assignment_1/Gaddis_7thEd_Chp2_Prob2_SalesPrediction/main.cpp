/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 23, 2016, 4:10 PM
 * Purpose: Sales Prediction
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//Formatting Libraries

using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float saleyr=4.6e6;//Sales for the year
    float percEco=.62;//Percent of East coast sales
    float amtEcoGn;   //Total amount east coast generated
    
    //Input data
    
    //Process data
    amtEcoGn=saleyr*percEco;
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Prediction of how much the East Coast division will generate = $"<<amtEcoGn<<endl;
    
    
    //Exit Stage Right
    return 0;
}


