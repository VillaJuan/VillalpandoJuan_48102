/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 8:09 PM
   Purpose: To calculate the percentage of males and females in a classroom
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
    float perMale, perFem;     //Percentage of Males and Females in the class
    int numMale, numFem, total;//Number of Males and Females in the class
    
    //Input values
    
    
    //Process values -> Map inputs to Outputs
   
    
    //Display Output
    cout<<"Enter the number of Males students in the class"<<endl;
    cin>>numMale;   //8 Males
    cout<<"Enter the number of Female students in the class"<<endl;
    cin>>numFem;    //12 Females
    total=numMale+numFem;       //Total number of students
    perMale=static_cast<float>(numMale)/total; 
    perFem=static_cast<float>(numFem)/total;
    cout<<"Percentage of Male students is: "<<perMale*100<<"%"<<endl;
    cout<<"Percent of Female students is:  "<<perFem*100<<"%"<<endl;
    
    //Exit Program
    return 0;
}