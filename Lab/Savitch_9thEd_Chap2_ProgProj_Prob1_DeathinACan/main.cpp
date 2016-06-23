/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 23, 2016, 1:10 PM
 * Purpose: Death in A Can
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float msMass=35;
    float msKill=5; //5 Grams of sweetener kill the mouse
    float hmMass=45400;//Grams or about 100 lb person
    float msSoda=350;//350 grams is the mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener 
    int nCans;//Number of cans to kill dieter
   
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}