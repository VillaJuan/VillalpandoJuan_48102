/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 8:57 PM
   Purpose:  Change Variable Product to old value times a new variable
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
    int stone = 4, weight1 = 6;
    int lbs=   stone*weight1;
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Number of stones:       "<<stone<<endl;
    cout<<"Weight of one stone:    "<<weight1<<" lbs"<<endl;
    cout<<"Total weight of stones: "<<lbs<<" lbs"<<endl;
    //Exit Program
    return 0;
}