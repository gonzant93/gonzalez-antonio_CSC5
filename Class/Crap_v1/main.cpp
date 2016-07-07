/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 07, 2016, 2:10 PM
 * Purpose: Craps Version 1
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <ctime>   //Time for random seed
#include <cstdlib> // Random number seed
#include <iomanip> //Formatting 
#include <cmath>   //Math Library
#include <fstream> //File I/O
#include <string>  //String 
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
     //Declare variables, no doubles
    int nGames,nWins=0,nLoses=0;
    
    //Input data
    cout<<"The game Craps"<<endl;
    cout<<"How many games to play?"<<endl;
    cin>>nGames;
            
    //Process data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine won or lose
        if(sum==7||sum==11) nWins++;
        else if(sum==2||sum==3||sum==12) nLoses++;
        else{
            //When to roll again
            bool rollAgn=false;
            do{
                //Throw another set of dice
                char die1=rand()%6+1;
                char die2=rand()%6+1;
                char sumAgn=die1+die2;
                if(sum==sumAgn){
                    nWins++;
                    rollAgn=false;
                }else if(sumAgn==7){
                    nLoses++;
                    rollAgn=false;
                }else rollAgn=true;
            }while(rollAgn);
        }
    }
    //Output data
    cout<<"Number of games = "<<nGames<<endl;
    cout<<"Number of wins = "<<nWins<<endl;
    cout<<"number of loses = "<<nLoses<<endl;
    
    //Exit Stage Right
    return 0;
}


