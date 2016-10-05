/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 21, 2016, 10:40 PM
   Purpose: Display the total monthly and annual cost of loan payment, insurance
    , gas expenses, oil expenses, tire expenses, and maintenance expenses of a 
    car
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
    float lnPymnt, insur, gas, oil, tires, maint;//Monthly loan payment,
                                                 //insurance, gas, oil, tires
                                                 //and maintenance
    float monthTot, annTot;   //Total monthly expenses and total annual expenses
    //Input values
   
    
    //Process values -> Map inputs to Outputs
   
    
    //Display Output
    cout << "Enter your monthly loan payment: $";
    cin >> lnPymnt;
    cout << "Enter your monthly insurance: $";
    cin >> insur;
    cout << "Enter your monthly gas expense: $";
    cin >> gas;
    cout << "Enter your monthly oil expenses: $";
    cin >> oil;
    cout << "Enter your monthly tires expenses: $";
    cin >> tires;
    cout << "Enter your monthly maintenance expenses: $";
    cin >> maint;

    monthTot = lnPymnt + insur + gas + oil + tires + maint;
    annTot = monthTot * 12;

    cout << setprecision(2) << fixed;
    cout << "****************************************************\n";
    cout << "Your total monthly expenses are: $" << monthTot << endl;
    cout << "Your total  annual expenses are: $" << annTot << endl << endl;

   
    
    //Exit Program
    return 0;
}