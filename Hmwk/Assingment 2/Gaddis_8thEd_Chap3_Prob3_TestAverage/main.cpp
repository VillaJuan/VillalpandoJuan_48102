/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 6:20 PM
   Purpose: To find the average of five tests taken
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip> 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float score1,score2,score3,score4,score5,avg;
    
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    cout<<"enter score for the first test score"<<endl;
    cin>>score1;
    cout<<"enter score for the second test score"<<endl;
    cin>>score2;
    cout<<"enter score for the third test score"<<endl;
    cin>>score3;
    cout<<"enter score for the fourth test score"<<endl;
    cin>>score4;
    cout<<"enter score for the fifth test score"<<endl;
    cin>>score5;
    avg=(score1+score2+score3+score4+score5)/5.0;
    cout<<"average is:"<<setw(4)<<setprecision(1)<<fixed<<avg<<endl;
    
    
    //Exit Program
    return 0;
}