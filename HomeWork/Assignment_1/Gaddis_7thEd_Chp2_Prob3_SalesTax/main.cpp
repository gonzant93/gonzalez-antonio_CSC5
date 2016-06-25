/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 23, 2016, 2:15 PM
 * Purpose: Sales Tax 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>// Formatting Libraries

using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float prch=52;//Purchased 
    float stTax=.04;//State Tax
    float cTax=.02;//County Tax
    float totTax;//Total Tax
    
    //Input data
    
    //Process data
    totTax=prch*(stTax+cTax);//equation of total tax
    
    //Output data
    cout<<"Total of Purchase w/out tax =   $"<<prch<<endl;
    cout<<"State Tax =                      "<<stTax*100<<"%"<<endl;
    cout<<"County Tax =                     "<<cTax*100<<"%"<<endl;
    cout<<"Total Tax =                      $"<<totTax<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Exit Stage Right
    return 0;
}


