/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 12, 2016, 12:51 PM
 * Purpose:  MidTerm Problem 3
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num, n1000s,n100s,n10s,n1s;
    char date,paye,accHol;
    
    //Input Data
    cout<<"Amount: "<<endl;
    cin>>num;
  
    
    //Process the Data
    string n1s[]={"zero","one","two","three","four","five","six","seven",
    "eight","nine","ten","eleven","tweleve","thirteen","fourteen","fifteen",
    "sixteen","seventeen","eighteen","ninteen"};
    
    string n10s[]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    
    string n100s[]={"one hundred","Two Hundred","Three Hundred","Four Hundred","Five Hundred",
    "Six Hundred","Seven Hundred","Eight Hundred","Nine Hundred"};
    
    string n1000s[]={"One Thousand","Two Thousand","Three Thousand","Four Thousand",
    "Five Thousand","Six Thousand","Seven Thousand","Eight Thousand","Nine Thousand"};
    
    if(num<=0){
        cout<<"Invalid Amount! "<<endl;
       }else if(num<=10&&num>0)
       {
         cout<<n1s;  
       }else if(num>=11&&num<=19)
       {
           cout<<n10s;
       }else if(num>=20&&num<=99)\
           {
    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}