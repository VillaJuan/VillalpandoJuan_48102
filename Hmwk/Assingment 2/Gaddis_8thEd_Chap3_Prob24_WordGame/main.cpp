/* 
   File:   main
   Author: Juan F. Villalpando
   Created on September 28, 2016, 9:36 PM
   Purpose: Make a word game that asks for the person's name, their age, name of
   a city, name of a college, a profession, type of animal, and a pet's name to
   create a story
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string name, city, college, prof, animal,petName;
    int age;
    //Input values
   
    
    //Process values -> Map inputs to Outputs
   
    
    //Display Output
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your age: ";
    cin>>age;
    cin.ignore();
    cout<<"Enter the name of a city: ";
    getline(cin, city);
    cout<<"Enter the name of a college: ";
    getline(cin, college);
    cout<<"Enter a profession: ";
    getline(cin, prof);
    cout<<"Enter a type of animal: ";
    getline(cin, animal);
    cout<<"Enter a pet's name: ";
    getline(cin, petName);
    
    cout<<"__________________________"<<endl;
    cout<<"      Word Game"<<endl;
    cout<<"__________________________"<<endl;
    
    cout<<"There once was a person named "<<name<<" who lived in "<<city
            <<"."<<" At the age "<<endl;
    cout<<"of "<<age<<", "<<name<<" went to college at "<<college<<". "<<name
            <<" graduated and went "<<endl;
    cout<<"to work as a "<<prof<<". "<<"Then, "<<name <<" adopted a(n) "<<animal
            <<" named "<<petName<<". "<<endl;
    cout<<"They both lived happily ever after!"<<endl;
   
    //Exit Program
    return 0;
}

