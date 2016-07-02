/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on June 28, 2016, 2:10 PM
 * Purpose: Grade Ternary 
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
    unsigned int score; //Input [0,100]
    char grade; //Output [A,B,C,D,F]
    
    //Input data
    cout<<"Input the score [0,100] output will be the grade"<<endl;
    cin>>score;
    
    //Process data
    grade=(score>=90)?'A':     
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
                  
    //Output data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right
    return 0;
}


