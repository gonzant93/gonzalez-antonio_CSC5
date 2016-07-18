/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 18, 2016, 12:51 PM
 * Purpose:  Prog Proj
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Numbers
#include <ctime>     //Time
#include <cmath>     //Math
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=pow(2,31)-1;//Max unsigned int value 
const unsigned int MXRND=(1<<31)-1;     //Same max unsigned int value

//Function Prototypes
float normal();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=10000;
    float x[SIZE];
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    cout<<"Integer Maximum Random  Number = "<<MAXRND<<endl;
    cout<<"Integer Maximum Random  Number = "<<MXRND<<endl;
    
    //Exit Stage Right!
    return 0;
}
float normal(){
    //Declare and intialize
    float sum=0;
    //Add12 unifomly distributed numbers
    for(int i=1;i<=12;i+){
        sum+=static_cast<float>(rand())/MAXRND;//[0,1]
        
    }
    //scale a number [0,12]-6 = [-6,6]
    return sum-6;
}