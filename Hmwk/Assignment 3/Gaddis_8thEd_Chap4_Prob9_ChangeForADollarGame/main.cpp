/* 
   File:   main
   Author: Juan Villalpando
   Created on October 5, 2016, 4:03 PM
   Purpose: change counting game that rewards you for entering the right total 
            amount of coins to make a dollar.
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int numPen;     //Number of pennies
    int numQuar;    //Number of quarters
    int numNick;    //Number of nickels
    int numDime;    //Number of dimes
    int total;      //The total amount of money
    
    //Input values
    const int penny  = 1;
    const int nickle = 5;
    const int dime   = 10;
    const int quarter= 25;
    
    //Process values -> Map inputs to Outputs
  
  
    //Display Output
    cout<<"Enter the number of Pennies: "<<endl;
    cin>>numPen;
    cout<<"Enter the number of Nickels: "<<endl;
    cin>>numNick;
    cout<<"Enter the number of Dimes: "<<endl;
    cin>>numDime;
    cout<<"Enter the number of Quarters: "<<endl;
    cin>>numQuar;
    
    total = (penny * numPen) + (nickle * numNick) + (dime * numDime) +
		(quarter * numQuar);
    if ( total == 100)
		cout<<"Congradulations, You Have Won a Million Dollars!"<<endl;
	else if (total > 100)
		cout<<"Your total amount is more than one dollar. ";
	else
		cout<<"Your total amount is less than one dollar. ";
    //Exit Program
    return 0;
}