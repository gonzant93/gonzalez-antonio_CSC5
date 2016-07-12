/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 11, 2016, 2:10 PM
 * Purpose: Midterm Menu 
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char choice;
    
    //Input data
    do{
        menu();
        cin>>choice;
    
    
    
    //Process data
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');        
    
    //Output data
    
    //Exit Stage Right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 1
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 1
void prob1(){
    cout<<"You are entering Problem 1"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 2
void prob2(){
    cout<<"You are entering Problem 2"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 5
void prob5(){
    cout<<"You are entering Problem 5"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 6
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 MENU
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - The Menu
void menu(){
    cout<<"Menu Program for MidTerm"<<endl;
    cout<<"Simply choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
}

