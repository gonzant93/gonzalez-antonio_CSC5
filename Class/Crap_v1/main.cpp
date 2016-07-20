/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 18, 2016, 2:10 PM
 * Purpose: Craps Version 1
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <iomanip>   //Formatting
#include <cmath>     //Math Library
#include <fstream>   //File I/O
#include <string>    //String Object
using namespace std; //Namespace of the System Libraries

int main(int argc, char** argv){
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
//Declared Variables
int throw1, throw2, throw3, throw4;
int bet1 = 100;
int bet2 = 300;
int bet3 = 500;
int bet=(bet1, bet2, bet3);
int deposit;
int account;
int count = 0;

//Input data
    while(count < 3){

        cin>>deposit;

        while(deposit>5000 || deposit<0){                
            cout<<"deposit failed"<<endl;
            cin>>deposit;

        }
        account = deposit;
        cout<<"You have deposited $"<<deposit<<endl;   
        cout<<"and you have this much cash on your account $"<<account<<endl;

        if (account>499){         
            cout<<"please place your bet"<<endl;
            cout<<"bet1=100, bet2=300, bet3=500"<<endl;
            cin>>bet1;
            cin>>bet2;
            cin>>bet3;
            account = (deposit - bet);
            cout<<"you have this much cash on your account"<<account<<endl;
        }
        else if(account>299){
            cout<<"please place your bet"<<endl;
            cout<<"bet1=100, bet=300"<<endl;     
            cin>>bet1;
            cin>>bet2;
            account =(deposit - bet);
            cout<<"you have this much cash on your account"<<account<<endl;
        }
        else if(account>99){
            cout<<"please place your bet"<<endl;
            cout<<"bet1=100"<<endl;
            cin>>bet1;
            cout<<"you have placed your bet"<<bet<<endl;
        }

        while (account<100 || deposit>5000){
            cout<<"insufficient funds"<<endl;
            cin>>deposit;
            account=deposit;
        }     
        //Dice
        cout<<"Throw dice"<<endl; 
            throw1 = rand() % 6 + 1;
            throw2 = rand() % 6 + 1;
            throw3 = rand() % 6 + 1;
            throw4 = rand() % 6 + 1;
            cout<<"You rolled"<<throw1<<endl;
            cout<<"You rolled"<<throw2<<endl;
            cout<<"Computer rolled"<<throw3<<endl;
            cout<<"Computer rolled"<<throw4<<endl;
        
    }
    count++;
   return 0;
}
    


