/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 21, 2016, 12:51 PM
 * Purpose: Largest/Smallest Array Values
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
    int numbers=10;
    int val[numbers];
    int count;
    int lowest,highest;
    //Input Data
    cout<<"Enter 10 values "<<endl;
    cin>>val[0];
    cin>>val[1];
    cin>>val[2];
    cin>>val[3];
    cin>>val[4];
    cin>>val[5];
    cin>>val[6];
    cin>>val[7];
    cin>>val[8];
    cin>>val[9];
            
    //Process the Data
    highest = val[0];
    for(count=1;count<numbers; count++)
    {
        if(val[count]>highest)
            highest=val[count];
    }
    cout<<"Highest value is "<<highest<<endl;
    
    lowest = val[0];
    for(count =1;count<numbers; count++)
    {
        if(val[count]<lowest)
            lowest=val[count];
        
    }
    cout<<"Lowest value is "<<lowest<<endl;
    
    
    //Exit Stage Right!
    return 0;
}