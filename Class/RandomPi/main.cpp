/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 6, 2016, 12:51 PM
 * Purpose: Random Approximation or Stochastic Calculus  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <ctime>
#include <cstdlib>//Random Number Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float approxPI;
    int nDarts,nCirc=0;
    float maxRnd=pow(2,31)-1;
    float max=-1,min=2;
    
    //Input Data
    cout<<"How many darts to throw to approximate PI"<<endl;
    cin>>nDarts;
    
    //Process the Data
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRnd;
        float y=rand()/maxRnd;
        if(x*x+y*y<=1)nCirc++;
        if(max<x)max=x;
        if(min>x)min=x;
        if(max<y)max=y;
        if(min>y)min=y;
    }
    approxPI=4.0f*nCirc/nDarts;
    
    //Output the processed Data
    cout<<"Max Random = "<<max<<" Min Random = "<<min<<endl;    
    cout<<PI<<" approximate by "<<nDarts<<" darts = "<<approxPI<<endl;
    
    //Exit Stage Right!
    return 0;
}