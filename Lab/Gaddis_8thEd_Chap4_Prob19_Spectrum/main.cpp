/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 29, 2016, 12:12 PM
   Purpose:  
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
    float waveLen;
    
    //Input values
    cout<<"Input wave length of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    
    //Process values -> Map inputs to Outputs
    if     (waveLen>1e-2f) cout<<"Radio Band"<<endl;
    else if(waveLen>1e-3f) cout<<"Micro Wave Band"<<endl;
    else if(waveLen>7e-7f) cout<<"Infra-Red Band"<<endl;
    else if(waveLen>4e-7f) cout<<"Visible Band"<<endl;
    else if(waveLen>1e-8f) cout<<"Ultra-Violet Band"<<endl;
    else if(waveLen>1e-11f)cout<<"X-Ray Band"<<endl;
    else                   cout<<"Gamma-Ray Band"<<endl; 
    //Display Output

    //Exit Program
    return 0;
}