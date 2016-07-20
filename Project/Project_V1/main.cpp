/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 6, 2016, 12:51 PM
 * Purpose:  Dice Game
 */

//System Libraries
#include <iostream> //Input Output
#include <iomanip>  //Formating Library
#include <cstdlib>  //Random Seed
#include <ctime>    //Time
#include <string>   //String Library
 
using namespace std;
int main(int argc, char** argv){
 //Set the random number seed
  srand(static_cast<unsigned int>(time(0)));
    
//Declared Variables
int die1,die2,dice; //Dice numbers
float bet;          //Amount of bet
float money=50;     //Amount started with
string player;      //Name of player

//Output/Input Data
cout<<setprecision(2)<<fixed<<showpoint;
cout<<"              *Welcome to the game of Craps!!*                   "<<endl;
cout<<"*****************************************************************"<<endl;
cout<<"Please enter your name first name: "<<player<<endl;
cin>>player;
 
//Start of the loop for betting
do{
    cout<<"Hello "<<player<<" you currently have $" <<money<<endl;
    cout<<"Place your bet and roll the dice (minimum $1): "<<endl;
    cin>>bet;

    while (bet<1 || bet>money){

        if (bet<1)
        cout<<"Don't be so cheap put some money on the table!"<<endl;
        if (bet>money)
        cout<<" You don't have that much!"<<endl;
        exit(1);
        
        }

    cout<<"You bet $"<<bet<<endl;

//dice roll
    die1=rand()%6+1;
    die2=rand()%6+1;
    dice=die1+die2;

    cout<<" You rolled a "<<die1<<" and a "<<die2
    <<" for a total of "<<dice<<endl;

    //Winning numbers 7 & 11
    if (dice==7||dice==11){                      
        cout<<" You've won"<<endl;
        money+=bet;      //Equation for winning money
        }

//Loosing numbers 2,3,12
    else if (dice==2||dice==3||dice==12){       
        cout<<"You've lost"<<endl;
        money-=bet;      //Equation for losing money
        }


    else{
            //Loop for betting
            do{
                cout<<player<<" you currently have $"<<money<<" on hand."<<endl; 
                cout<<"Place your bet and roll the dice (minimum $1): "<<endl;
                cin>>bet;
                while (bet<1 || bet>money){
                if (bet<1)
                cout<< " Need the minimum. Take a chance!"<<endl;
                if (bet>money)
                cout<<" You don't have that much!"<<endl;
                cout<<" Place your bet (minimum $1): "<<endl;
                cin>>bet;
                }
                cout<<"You bet $"<<bet<<endl; //end betting loop

                //Dice 

                die1=rand()%6+1;
                die2=rand()%6+1;
                dice=die1+die2;

                cout<<" You rolled a "<<die1
                <<" and a "<<die2
                <<" for a total of "<<dice<<endl;

                //Wining Numbers 7,11
                if (dice==7||dice==11){                             
                    cout<<" YOU WON!!!! lets raise the Stakes"<<endl;
                    money+=bet;
                    }
               //Losing numbers 2,3,12
                if (dice==2||dice==3||dice==12){                    //Loser
                    cout<<" YOU LOSE its ok you can WIN it back"<<endl;
                    money-=bet;
                    }

                else{
                    cout<<" Keep going!! Roll a 7 or 11 to win!"<<endl;

                    }
                //Loosing numbers 2,3,12
                 }while (dice!=2 || dice!=3||dice!=12);
     }
   //If money goes to 0 then you lose and game stops    
 } while(money<1);
     cout<<" Looks like you ran out of money. Come back soon!"<<endl;
    
    return 0;
}
