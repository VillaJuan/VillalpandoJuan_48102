/* 
   File:   main
   Author: Juan Villalpando
   Created on October 5, 2016, 5:12 PM
   Purpose: To calculate the number of points book club members have at the 
            end of the month
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
    int books, points;
    
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    cout<<"_________________________"<<endl;
    cout<<"    Book Club Points     "<<endl;
    cout<<"_________________________"<<endl;
    
    cout<<"Enter the number of books purchased this month: "<<endl;
    cin>>books;
    
    if(books == 0)
    {
        points=0;
        cout<<"You have earned "<<points<<" points."<<endl;
    }
        else if(books==1)
        {
            points=5;
            cout<<"You have earned "<<points<<" points."<<endl;
        }
        else if(books==2)
        {
            points=15;
            cout<<"You have earned "<<points<<" points."<<endl;
        }
        else if(books==3)
        {
            points=30;
            cout<<"You have earned "<<points<<" points."<<endl;
        }
        else if(books>=4)
        {
            points=60;
            cout<<"You have earned "<<points<<" points."<<endl;
        }
        else if(books<0)
        {
            cout<<"Number of books cannot be negative!"<<endl;
        }
    
    //Exit Program
    return 0;
}