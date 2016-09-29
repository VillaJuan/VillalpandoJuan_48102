/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 9:27 PM
   Purpose:  Display output of variable that's been declared but not initialized
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int car, truck, van, bus, bike; //Declared variables yet to be initialized
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output of variables that have not been initialized
    cout<<"Preferred vehicle type used at RCC:"<<endl;
    cout<<"Car:   "<<car<<endl;
    cout<<"Truck: "<<truck<<endl;
    cout<<"Van:   "<<van<<endl;
    cout<<"Bus:   "<<bus<<endl;
    cout<<"Bike:  "<<bike<<endl;
    //Exit Program
    return 0;
}