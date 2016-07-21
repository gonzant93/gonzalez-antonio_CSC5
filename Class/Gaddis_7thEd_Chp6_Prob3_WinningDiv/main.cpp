/* 
 * File:   main.cpp
 * Author: Antonio Gonzalez
 * Created on July 20, 2016, 12:51 PM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float getSales();
void findHighest(float,float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input Data
    cout<<"NorthEast sales for the quarter (in $) = $"<<endl;
    float neSales=getSales();
    cout<<"SouthEast sales for the quarter (in $) = $"<<endl;
    float seSales=getSales();
    cout<<"NorthWest sales for the quarter (in $) = $"<<endl;
    float nwSales=getSales();
    cout<<"SouthWest sales for the quarter (in $) = $"<<endl;
    float swSales=getSales();

    //Process the Data
   findHighest(neSales,seSales,nwSales,swSales); 
    
    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}
float getSales (){
    float sales;
    cin>>sales;
    return sales;
}

void findHighest(float neSales,float seSales,float nwSales,float swSales ){
    if(neSales>seSales&&neSales>nwSales&&neSales>swSales){
    cout<<"The region with the highest sales in this quarter is NorthEast"<<endl;
    }
    else if(seSales>neSales&&seSales>nwSales&&seSales>swSales){
    cout<<"The region with the highest sales in this quarter is SouthEast"<<endl;
    }
    else if (nwSales>neSales&&nwSales>seSales&&nwSales>swSales){
    cout<<"The region with the highest sales in this quarter is NorthWest"<<endl;
    }
    else if (swSales>neSales&&swSales>seSales&&swSales>nwSales){
    cout<<"The region with the highest sales in this quarter is SouthWest"<<endl; 
    }
}