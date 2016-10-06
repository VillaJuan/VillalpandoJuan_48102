/* 
   File:   main
   Author: Juan F. Villalpando
   Created on October 5th, 2016 9:17pm
   Purpose: Produce a sign and horoscope based on entered birthday
 */

//System Libraries
#include <iostream>

//Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int month, day;
    char ans, space;
    //Input values
    
    //Process values -> Map inputs to Outputs
      do
    {
        cout << "Please Enter the Month of your Birthday:" <<endl;
        cin >> month;
        cout << "Please Enter the Day of Your Birthday: " <<endl;
        cin>> day; 

        if((month == 3 && day >= 21)||(month==4 && day <= 19))
           {
              cout << "You Are an Aries! \n";
           }
        else if((month == 4 && day >= 20)||(month==4 && day <= 20))
           {
              cout << "You Are an Taurus! \n";
           }
        else if((month == 5 && day >= 21)||(month==6 && day <= 21))
           {
              cout << "You Are an Gemini! \n";
           }
        else if((month == 6 && day >= 22)||(month==7 && day <= 22))
           {
              cout << "You Are an Cancer! \n";
           }
        else if((month == 7&& day >= 23)||(month==8 && day <= 22))
           {
              cout << "You Are an Leo! \n";
           }
        else if((month == 8&& day >= 23)||(month==9 && day <= 22))
           {
              cout << "You Are an Virgo! \n";
           }
        else if((month == 9&& day >= 23)||(month==10 && day <= 22))
           {
              cout << "You Are an Libra! \n";
           }
        else if((month == 10&& day >= 23)||(month==11 && day <= 21))
           {
              cout << "You Are an Scorpio! \n";
           }
        else if((month == 11&& day >= 22)||(month==12 && day <= 21))
           {
              cout << "You Are an Saggitarius! \n";
           }
        else if((month == 12&& day >= 22)||(month==1 && day <= 19))
           {
              cout << "You Are an Capricorn! \n";
           }
        else if((month == 1&& day >= 20)||(month==2 && day <= 18))
           {
              cout << "You Are an Aquarius! \n";
           }
        else if((month == 2&& day >= 19)||(month==3 && day <= 20))
           {
              cout << "You Are an Pisces! \n";
           }

        cout << "Would You like to Find Another Horoscope? (Please Type Y or N)\n ";
        cin >> ans;

    } while(ans == 'y' || ans == 'Y');

     cout << "Good Bye!\n";   
     ("PAUSE");
     return 0;

}