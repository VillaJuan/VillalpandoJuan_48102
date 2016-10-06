/* 
   File:   main
   Author: Juan Villalpando
   Created on October 5, 2016, 6:04 PM
   Purpose: Compute the total cost of a purchase from a software company with 
            quantity discounts.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int units;
    float subtotal, total;

    //Input values
    
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    cout<<"_____________________________"<<endl;
    cout<<"      Software Sales         "<<endl;
    cout<<"_____________________________"<<endl;
    
    cout<<"Number of units sold: "<<endl;
    cin>>units;
    cout<<setprecision(2)<<fixed;
    
    if (units>0 && units<10)
    {
        total=units*99;
        cout<<"The total is: $"<<total<<endl;
    }
    else
        {
        if(units >= 10 && units <= 19)
        {
            subtotal = (units * 99) * 0.20;
            total = (units * 99) - subtotal;
            cout << "The total is: $" << total << "\n\n";
        }
    else
        {
        if(units >= 20 && units <=49)
        {
            subtotal = (units * 99) * 0.30;
            total = (units * 99) - subtotal;
            cout << "The total is: $" << total << "\n\n";
        }
    else
        {
        if(units >= 50 && units <= 99)
        {
            subtotal = (units * 99) * 0.40;
            total = (units * 99) - subtotal;
            cout << "The total is: $" << total << "\n\n";
         }
    else
        {
        if(units >= 100)
        {
            subtotal = (units * 99) * 0.50;
            total = (units * 99) - subtotal;
            cout << "The total is: $" << total << "\n\n";
        }
    else
        {
        cout << "The number of units has to be greater than 0!! \n\n";
        }
        }
        }
        }
        }

    //Exit Program
    return 0;
}