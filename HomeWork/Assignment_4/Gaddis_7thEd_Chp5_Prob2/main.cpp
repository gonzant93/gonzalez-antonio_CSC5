/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 07, 2016, 2:10 PM
 * Purpose: Characters for the ASCII Codes 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library

using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int min=1,max=127;
    int num=min;      
    
    //Input data

    
    //Process data
    for(int min=1;num<=127;num++){
     cout<<"Integer = "<<num<<"\t\t"<<"Character: "<<char(num)<<endl;
     if(num%16==15)cout<<endl;
    }
    //Output data
    
    
    //Exit Stage Right
    return 0;
}


