/* 
   File:   main
   Author: Juan Villalpando
   Created on October 12, 7:54 PM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Set precision
#include <ctime>      //Time
#include <cstdlib>    //Random number generator
#define MPG 0.264179  //Define MPG
using namespace std;  //Name-space used in the System Library

//User Libraries
float calcInf(float, float);

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;       //Conversion from KG to Grams
float CNSGGRM=14593.9;    //Conversion from Slugs to Grams
float CNKMMET=1000;       //Conversion from Km to Meters
float CNMETCM=100;        //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;//Conversion from Dynes to Pounds
float CNSGLBS=32.174f;    //Conversion from slugs to lbs which oddly acceleration of gravity in ft/sec^2
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis 8thEd Chap 5 Problem 23"<<endl;
        cout<<"2.  Type 2  for Gaddis 8thEd Chap 5 Problem 22"<<endl;
        cout<<"3.  Type 3  for Gaddis 8thEd Chap 5 Problem 16"<<endl;
        cout<<"4.  Type 4  for Gaddis 8thEd Chap 5 Problem 14"<<endl;
        cout<<"5.  Type 5  for Gaddis 8thEd Chap 5 Problem 9"<<endl;
        cout<<"6.  Type 6  for Gaddis 8thEd Chap 5 Problem 7"<<endl;
        cout<<"7.  Type 7  for Gaddis 8thEd Chap 5 Problem 4"<<endl;
        cout<<"8.  Type 8  for Savitch 9thEd Chap 4 Practice Program 7"<<endl;
        cout<<"9.  Type 9  for Savitch 9thEd Chap 4 Practice Program 4"<<endl;
        cout<<"10. Type 10 for Savitch 9thEd Chap 4 Practice Program 1"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 23 Pattern Display"<<endl;
                //Declaration of Variables
                int colomn=10;
                int row=10;
    
                //Input values
    
                //Process values -> Map inputs to Outputs
    
                //Display Output
                //Pattern A
                cout<<endl<<"Pattern A:"<<endl;
                for(int row=0; row<10; row++)
                {
                    for(int col=0; col<row;col++)
                    cout<<"+";
                    cout<<endl;
                }
    
                //Pattern B
                cout<<endl<<"Pattern B:"<<endl;
                for(int row=10; row>=1; row--)
                {
                    for(int col=1; col<row;col++)
                    cout<<"+";
                    cout<<endl;
                }
                break;
            }
            case 2:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 22 Square Display"<<endl;
                //Declaration of Variables
                int randNum;
                int userNum;
                int attempts=0;
    
                //Input values
                bool win=false;
                unsigned seed=time(0);
                srand(seed);
    
                //Process values -> Map inputs to Output
                randNum=1+rand()%10;
    
                //Display Output
                cout<<"Can you guess the number I am thinking of?"<<endl;
                cin>>userNum;
    
                while(!win)
                {
                    if(userNum<randNum)         //Number guessed is too low
                    {
                        cout<<"Too low, try again!"<<endl;
                        cin>>userNum;
                         attempts++;
                    }
                    else if(userNum>randNum)    //Number guessed is too high
                    {
                        cout<<"Too high, try again!"<<endl;
                        cin>>userNum;
                        attempts++;
                    }
                    else
                    {
                        attempts++;
                        cout<<"Congratulations, you win!"<<endl;
                        cout<<"It took you "<<attempts<<" attempts."<<endl;
                        win=true;
                    }
                }
                break;
            }
            case 3:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 16 Savings Account Balance"<<endl;
                //Declaration of Variables
                float annIntRt=0;    //Annual Interest Rate
                float starBal=0;     //Starting balance
                int   mnthsPsd=0;    //Months passed
                float deposits=0;    //Deposits
                float withdraw=0;    //Withdrawal
                float totDepos=0;    //Total deposit
                float totWith=0;     //Total withdrawal
                float totInt=0;      //Total interest
                float mnthInRt=0;    //Monthly interest rate
                float totBal=0;      //Total balance
    
                //Display Output
                cout<<"Enter the annual interest rate on the account (e.g .04):"<<endl;
                cin >> annIntRt;
	
                cout<<"Enter the starting balance:"<<endl;
                cin >> starBal;
	
                cout<<"How many months have passed since the account was established? "<<endl;
                cin >> mnthsPsd;
    
                //Initialize variables
                totBal=starBal;
                mnthInRt=annIntRt/12;
    
                //Loop and let user input values
                for(int x=1; x <= mnthsPsd; ++x)
                {
                    cout<<"Month #"<<x<<endl;
                    cout<<"Total deposits for this month:"<<endl;
                    cin>>deposits;
                    totDepos+=deposits;
                    totBal+=deposits;
		
                    cout<<"Total withdrawal for this month:"<<endl;
                    cin>>withdraw;
                    totWith+=withdraw;
                    totBal-=withdraw;
		
                    totInt+=(totBal*mnthInRt);
                    totBal+=(totBal*mnthInRt);
 
                    // check for negative values, end loop if the values are negative
                    if(deposits<0 || withdraw<0 || totBal<0)
                    {
                        cout<< "Please enter positive numbers only!"<<endl;
                        cout<<"The account has been closed.."<<endl;
                        exit(1);
                    }
                }
                cout<<fixed<<setprecision(2);
                cout.fill('.');
                cout<<"Ending balance: "<<left<<setw(20)<<right<<setw(20)<<"$"<<totBal<<endl;
                cout<<"Amount of deposits: "<<left<<setw(20)<<right<<setw(16)<<"$"<<totDepos<<endl;
                cout<<"Amount of withdrawals: "<<left<<setw(20)<<right<<setw(13)<<"$"<<totWith<<endl;
                cout<<"Amount of interest earned: "<<left<<setw(20)<<right<<setw(9)<<"$"<<totInt<<endl;
                break;
            }
            case 4:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 14 Student Line Up"<<endl;
                //Declaration of Variables
                int numStud=0;   //Number of students
                string studName; //Student name
                string fstStud; //First student in line
                string lstStud; //Last student in line

                //Display Output
                //Number of students cant be less than 1 or greater than 25
                while (numStud<1||numStud>25)
                {
                    cout<<"Please enter the number of students, must be between 1 and 25"<<endl;
                    cin>>numStud;
                }
                for (int i=1; i<=numStud;i++)
                {
                    cout<<"Please enter name of student "<<i<<":"<<endl;
                    cin>>studName;
                    if(i==1)
                    {
                        fstStud=studName;
                        lstStud=studName;
                    }
                    else
                    {
                        if(studName<fstStud)
                        fstStud=studName;
                    else if(studName>lstStud)
                        lstStud=studName;       
                    }
                }
                cout<<"First student is: "<<fstStud<<endl;
                cout<<"Last student is:  "<<lstStud<<endl;
                break;
            }
            case 5:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 9 Hotel Occupancy"<<endl;
                //Declaration of Variables
                float floors=0,
                      count=0,
                      rooms,
                      roomTot=0,
                      occupied,
                      occTot=0,
                      unoccupied,
                      number=0,
                      percent=0;
    
                //Display Output
                cout<<"Welcome to the hotel occupancy calculator"<<endl;
                cout<<"How many floors are in your hotel?"<<endl;
                cin>>floors;
    
                while (floors < 1)//if user enters 0 or less floors, error
                {
                    cout<<"ERROR: You cannot enter 0 or less for the number of floors!"<<endl;
                    cout<<"PLEASE TRY AGAIN!"<<endl;
                    cin>>floors;
                }
                while (number < floors)//loop to ask for input from user, once for each floor
                {
                    count++;
                //if count == 13 (13th floor) we will stop loop, and start over at top
                    if (count == 13)
                    {
                        cout<<"We will be skipping floor #13, as is common in most hotels."<<endl;
                        continue;
                    }
                //asks user to enter number of floors
                    cout<<"How many rooms on floor number "<<count<<"? (cannot be less than 10)"<<endl;
                    cin>>rooms;
                while (rooms <10)//if user enters less than 10 rooms per floor, error
                {
                    cout<<"ERROR: Cannot be less than 10 rooms! Please try again."<<endl;
                    cin>>rooms;
                }           
                //asks users how many rooms in floor
                cout<<"How many rooms are occupied on this floor?"<<endl;
                cin>>occupied;
                while (occupied > rooms)
                {
                //if user enters more occupied than rooms on floor, error
                     cout<<"ERROR: You cannot have more occupied rooms than total rooms on floor! Please try again."<<endl;
                     cin>>occupied;
                }       
                //add one to number during each loop
                number++;
                roomTot+=rooms;
                occTot+=occupied;
            }

                //our totals for the solution
                unoccupied=roomTot-occTot;
                percent=occTot/roomTot*100;

                //shows user the solutions
                cout<<"Total Floors: "<<floors<<endl;
                cout<<"Total Rooms: "<<roomTot<<endl;
                cout<<"Total Occupied: "<<occTot<<endl;
                cout<<"Total Unoccupied: "<<unoccupied<<endl;
                cout<<"Percentage of rooms occupied is: "<<fixed<<setprecision(2)<<percent<<"%"<<endl;
                break;
            }
            case 6:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 7 Pennies For Pay"<<endl;
                //Input values
                int numDays=1;
                float money=1.0;    //1 penny
                float total=0;      //Total for the day entered
                float dayPay=0;     //Pay for each day
    
                //Process values -> Map inputs to Outputs
    
    
                //Display Output
                cout<<"Enter the number of days"<<endl;
                cin>>numDays;
    
                while(numDays<1) //Number of days cannot be < 1
                {
                    cout<<"The number of days cannot be less than 1. Please enter a valid number of days"<<endl;
                    cin>>numDays;
                }
                for(int i=1; i<=numDays; i++)
                {
                    dayPay=money/100;
                    cout<<"For day "<<i<<" you earned "<<dayPay<<" pennies"<<endl;
                    total+=dayPay;
                    money*=2;
                }
                cout<<"The total earnings for "<<numDays<<" days are $"<<total<<endl;
                break;
            }
            case 7:{
                cout<<"Inside Gaddis 8thEd Chap 5 Problem 4 Calories Burned"<<endl;
                //Declaration of Variables
                float calBrnd;      //Calories burned
    
                //Input values
                float calPrMin=3.9f; //Calories burned per min = 3.9
    
                //Display Output
                for(int i=5; i<=30; i+=5)
                {
                    calBrnd=i*calPrMin;
                    cout<<"In "<<i<<" minutes, you burned "<<calBrnd<<" calories."<<endl;
                }
                break;
            }
            case 8:{
                cout<<"Inside Savitch 9thEd Chap 4 Practice Program 7 Weigh In"<<endl;
                //Declaration of Variables
                float msEarth=5.972e24;//Google lookup -> Kilograms
                float msMark=6.0f;     //Mass of Mark -> Slug
                float rdEarth=6371.0f; //Google radius of the earth km
                float weight;          //Force of attraction from Physics
    
                //Conversion of inputs
                msEarth*=CNKGGRM;      //Convert mass of the earth to grams
                msMark*=CNSGGRM;       //Convert mass of mark to grams
                rdEarth*=CNKMMET*CNMETCM;//Convert the radius of the earth to centimeters
    
                //Process values -> Map inputs to Outputs
                weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;//Weak force attraction due to Gravity
                weight*=CNDYNLB;      //Convert dynes to pounds
    
                //Display Output
                cout<<"According to the Weak Force of Gravity Mark weighs = "<<weight<<"lbs"<<endl;
                cout<<"As a check Mark weighs = "<<6*CNSGLBS<<"lbs"<<endl;
                cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
                cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
                break;
            }
            case 9:{
                cout<<"Inside Savitch 9thEd Chap 4 Practice Program 4"<<endl;
                //Declaration of Variables
                float lasYrPr=0.0;
                float curYrPr=0.0;
                float infRte=0.0;
                char redo;

                do
                {
                    //Input values
    
                    //Process values -> Map inputs to Outputs
                    cout<<"What was the price of the item a year ago? ";
                    cin>>lasYrPr;
                    cout<<"What is the price of the item today? ";
                    cin>>curYrPr;


                    //Display Output
                    cout<<"The inflation rate is "<<((curYrPr-lasYrPr)/lasYrPr*100)<<"%."<<endl;

                    cout<<"Do you want to run this program again(yes=1, no=0)? "<<endl;
                    cin>>redo;
                    cout<<endl;

                }while(redo == '1');
                cout<<"Don't Let Your Money Sit Around Losing Value"<<endl;
                break;
            }
            case 10:{
                cout<<"Inside Savitch 9thEd Chap 4 Practice Program 1 Gas Consumption"<<endl;
                //Declaration of Variables
                float liters = 0;
                float distance = 0.0;
                float mpg = 0.0;
                char redo;

                do
                {
                    //Input values
    
                    //Process values -> Map inputs to Outputs
    
                    //Display Output
                    cout<<"Enter the amount of gasoline in liters: ";
                    cin>>liters;
                    cout<<endl;

                    cout<<"Enter the number of miles traveled: ";
                    cin>>distance;
                    cout<<endl;

                    mpg=distance/(liters * MPG);

                    cout<<"The gas mileage of this travel is "<<mpg<<endl;
                    cout<<endl;

                    cout<<"Do you want to run this program again(yes=1, no=0)? ";
                    cin>>redo;
                    cout<<endl;

                }while(redo == '1');
                cout<<"Don't text and Drive. It's the law!"<<endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}