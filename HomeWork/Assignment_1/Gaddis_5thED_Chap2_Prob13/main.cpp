/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 21, 2016, 1:09 PM
 * Purpose: Circuit Board Problem
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float profit=0.40f,//40 percent profit
          cost=12.67f,//Cost in $'s
          selPrce;// Selling price in $'s
    
    //Input data
    
    //Process the data
    //selPrce=cost*profit+cost;
    selPrce=cost*(1+profit);
    int pennies=selPrce*100+0.5;//Shift into pennies add a half to round up 
    selPrce=pennies/100.0f;
    
    //Output the processed Data
    cout<<"Cost of circuit board to the company = $"<<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
        
    //Exit Stage Right
    return 0;
}


