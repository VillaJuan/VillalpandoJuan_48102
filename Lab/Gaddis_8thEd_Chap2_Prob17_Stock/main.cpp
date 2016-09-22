/* 
 * File:   main
 * Author: Juan Villalpando
 * Created on September 6, 2016, 11:39 AM
 * Purpose: Calculate cost of Stock Purchase
 */

#include <iostream>  //Imput/Output Libraries
using namespace std; // Libraries compiled under standard namespace

//User Libraries

//Global Constants 
const char PERCENT=100; //Conversion to percentage

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nShares=750;  //Number of Shares
    float ppShare=3.5e1f;        //Price per share in $'s
    unsigned char comish=2;      //Commission percentage
    float pricePd, comshPd, totPaid; //Price, Commission, Total Paid in $'s
    
    //Calculate the amounts paid in $'s
    pricePd=nShares*ppShare;
    comshPd=pricePd*comish/PERCENT;
    totPaid=pricePd+comshPd;
    
    //Output the results
    cout<<"Price of Stock Purchase Problem"<<endl;
    cout<<"Number of Shares purchased = "<<nShares<<endl;
    cout<<"Price per share = $"<<ppShare<<endl;
    cout<<"Commission = "<<static_cast<int>(comish)<<"%"<<endl;
    cout<<"Price paid for the shares = $"<<pricePd<<endl;
    cout<<"Price paid in commission  = $"<<comshPd<<endl;
    cout<<"Total paid                = $"<<totPaid<<endl;

    return 0;
}

