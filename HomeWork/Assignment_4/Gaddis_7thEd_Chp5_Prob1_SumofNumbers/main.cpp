/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 6, 2016, 3:10 PM
 * Purpose: Sum of Numbers 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library 
#include <iomanip>//Formatting Library 

using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int sum=0,num;
  
  
    //Input data
    cout<<"Enter a positive integer "<<endl;
    cin>>num;
    
    if (num<0){
        cout<<"Please enter positive integers only!"<<endl;
    }
       
    else
    {
    for (int i=1; i<=num; i++){
        sum+=i;
        }
    
    //Process data
    
    //Output data
    cout<<"Sum of all integers = "<<sum<<endl;
    } 
    //Exit Stage Right
    return 0;
}


