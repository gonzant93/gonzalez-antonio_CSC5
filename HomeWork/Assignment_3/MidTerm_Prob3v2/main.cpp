/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 12, 2016, 1:51 PM
 * Purpose:  MidTerm Problem 3 V2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>
#include <iomanip> //
 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short x;
    unsigned char n1000s,n100s,n10s,n1s;
    const int SIZE = 25; 
    char date[25],accHol[25],paye[25]; 
    
    //Input Data
    cout<<"Would like to write a check? Input the following: "<<endl;
    cout<<"Date: "<<endl; 
    cin.getline(date,25);
    cout<<"Payee: "<<endl; 
    cin.getline(paye,25);
    cout<<"Account Holder: "<<endl;
    cin.getline(accHol,25);
    cout<<"Amount: "<<endl; 
    cin>>x;

    
    //Output
    cout<<endl;
    cout<<accHol<<endl; 
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE  ZIP                            Date:  "<<date<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay to the Order of:  "<<paye<<"              $"<<x*1.0f<<endl;
    cout<<endl;
    
    //Output the processed Data
    if (x<0||x>1999)return 1;
    
    //Thousands Position
    n1000s=(x-x%1000)/1000.0f;
    switch(n1000s){
        case 1:cout<<"One Thousand ";
    }
   
    //Hundreds Position
    x-=n1000s*1000; 
    n100s=(x-x%100)/100.0f;
     switch (n100s){
         case 9:cout<<"Nine Hundred ";break;
         case 8:cout<<"Eight Hundred ";break;
         case 7:cout<<"Seven Hundred ";break;
         case 6:cout<<"Six Hundred ";break;
         case 5:cout<<"Five Hundred ";break;
         case 4:cout<<"Four Hundred ";break;
         case 3:cout<<"Three Hundred ";break;
         case 2:cout<<"Two Hundred ";break;
         case 1:cout<<"One Hundred ";break; 
         }
     
    //Tenths Position
    x-=n100s*100; 
    n10s=(x-x%10)/10.0f;  
    switch (n10s){
         case 9:cout<<"Ninety ";break;
         case 8:cout<<"Eighty ";break;
         case 7:cout<<"Seventy ";break;
         case 6:cout<<"Sixty ";break;
         case 5:cout<<"Fifty ";break;
         case 4:cout<<"Fourty ";break;
         case 3:cout<<"Thirty ";break;
         case 2:cout<<"Twenty ";break;
         case 1:{
             x-=n10s*10; 
             n1s=(x-x%1)/1.0f;
                switch(n1s){
                 case 9:cout<<"Nineteen ";break;
                 case 8:cout<<"Eighteen ";break;
                 case 7:cout<<"Seventeen ";break;
                 case 6:cout<<"Sixteen ";break;
                 case 5:cout<<"Fifteen ";break;
                 case 4:cout<<"Fourteen ";break;
                 case 3:cout<<"Thirteen ";break;
                 case 2:cout<<"Tweleve ";break;
                 case 1:cout<<"Eleven ";break;
                 case 0:cout<<"Ten ";break;
               }
                 
            }
        }     
    //Ones Positions
    if(n10s!=1){
             x-=n10s*10; 
             n1s=(x-x%1)/1.0f;
         switch (n1s){
             case 9:cout<<"Nine ";break;
             case 8:cout<<"Eight";break;
             case 7:cout<<"Seven ";break;
             case 6:cout<<"Six ";break;
             case 5:cout<<"Five ";break;
             case 4:cout<<"Four ";break;
             case 3:cout<<"Three ";break;
             case 2:cout<<"Two ";break;
             case 1:cout<<"One ";
         }
    }
    
    cout<<"and no/100s Dollars"<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR:  GOTTA PAY THE RENT	            "<<accHol<<endl;
    
    
    
    
    
    //Process the Data
   
  
    //Exit Stage Right!
    return 0;
}