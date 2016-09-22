/* 
 * File:   main.cpp
 * Author: Juan F. Villalpando
 * Purpose: Iteration to find Square Root
 * Created on September 20, 2016, 11:23 AM
 */

//System Libraries
#include <iostream>  //Inputs/Outputs objects
#include <iomanip>   //Format library
#include <cstdlib>   //Random number seed
#include <cmath>     //Square Root Function
#include <ctime>     //Time to set random number seed
using namespace std; //Name-Space used in the System Library

//User Libraries

//Global Constants
const float MAXRAND=pow(2,31)-1;//Max signed positive value for int

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input Values - float random number (10,100) vs. 
    //               integer random number rand()%scale+shift (10, 100)
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display the Initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Outputs
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //The answer or solution is 
    cout<<"The sqrt("<<n<<")="<<sqrt(n)<<endl;
    
    //Exit Program
    return 0;
}