/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 9:13 PM
   Purpose: To write a program that displays two random numbers to be added that
   pauses so the students can work on it and can later check their answer
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float num1, num2, total;      //Two random numbers and the total
    char next;
    unsigned seed = time(0);
    srand(seed);
    
    //Input value 
    
    //Process values -> Map inputs to Outputs
   
    
    //Display Output
    cout << "Hello, Welcome to Math Tutor " << endl;
    cout << "I will display two random numbers, try and solve for the answer." << endl;

    num1 = 1 + rand() % 350;
    num2 = 1 + rand() % 350;
    total = num1 + num2;

    cout << "\n";
    cout << num1 << " + " << num2 << " = " << endl;
    cout << "Hit any key and then Enter to show the answer";
    cin >> next;
    cout << "" << endl;
    cout << num1 << " + " << num2 << " = " << total << endl;
    
    //Exit Program
    return 0;
}