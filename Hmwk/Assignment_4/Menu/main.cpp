/* 
  File:   main.cpp
  Author: Natalie Tam
  Created on July 10, 2017, 6:45 PM
  Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"All problems are from Gaddis 8th Edition Chapter 5"<<endl;
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Sum of Numbers Problem"<<endl;
        cout<<"Type 2 for Ocean Levels Problem"<<endl;
        cout<<"Type 3 for Calories Burned Problem"<<endl;
        cout<<"Type 4 for Membership Fees Increase Problem"<<endl;
        cout<<"Type 5 for Distance Traveled Problem"<<endl;
        cout<<"Type 6 for Pennies for Pay Problem"<<endl;
        cout<<"Type 7 for Hotel Occupancy Problem"<<endl;
        cout<<"Type 8 for Average Rainfall Problem"<<endl;
        cout<<"Type 9 for Population Problem"<<endl;

        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                    int num = 0;
                    int sum = 0;

                    //Input data

                        cout<<"Enter a positive integer value"<<endl;
                        cin>>num;

                    while (num < 0)
                    {
                        cout<<"Unacceptable. Enter a POSITIVE integer value"<<endl;
                        cin>>num;
                    }

                    //Map inputs to outputs or process the data
                    for (int count = 1; count <= num; count++)
                    {
                        sum += count; 
                    }

                    //Output the transformed data
                    cout<<"The sum from 1 to "<<num<<" is "<<sum<<endl;

                    //Exit stage right!
                    return 0;
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                    float height;
                    int years = 25;
                    
                    cout<<"This program displays a table showing the number of "
                            "millimeters the ocean will rise each year for 25 years"<<endl;

                    for (int counter = 0; counter <= years; counter++)
                    {
                        height = counter * 1.5;
                        cout<<counter<<" years = "<<height<<" mm"<<endl;
                    }

                    //Exit stage right!
                    return 0;
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                    //Declare variables
                    float calBurn;
                    
                    cout<<"This program will display the number of calories"
                            " burned after 5, 10, 15, 20, 25, and 30 minutes"<<endl;
                    //Initialize variables
                    for(int counter = 5; counter <= 30; counter+=5)
                    {
                        calBurn = static_cast<float>(counter) * 3.6;
                        cout<<counter<<" minutes = "<<calBurn<<" calories burned"<<endl;
                    }

                    return 0;
                break;
            }
            case '4':{
                cout<<"We are in Problem 4"<<endl;
                    float increase = 0.04;
                    int years = 6;
                    float memFee = 2500;
                    
                    //Output the data
                    cout<<"This program displays the projected membership rates for the next 6 years"<<endl;
                    for (int counter = 1; counter <= 6; counter++)
                    {
                        memFee = memFee + (memFee * increase);
                        cout<<"Year "<<counter<<" = $"<<memFee<<endl;
                    }
                    //Exit stage right!
                    return 0;
            }
            
        case '5':{
                cout<<"We are in Problem 5"<<endl;
                    int speed;
                    int hours;
                    int distance;

                    //Input data
                    cout<<"What is the speed of the vehicle in mph? ";
                    cin>>speed;

                    while (speed < 0)
                    {
                        cout<<"Enter a positive number for speed in mph"<<endl;
                        cin>>speed;
                    }

                    cout<<"How many hours has it traveled? ";
                    cin>>hours;

                    while (hours < 0)
                    {
                        cout<<"Enter a positive number of hours"<<endl;
                        cin>>hours;
                    }

                    cout<<"Hour     Distance Traveled"<<endl;
                    cout<<"--------------------------"<<endl;

                    //Map inputs to outputs or process the data
                    for(int counter = 1; counter <= hours; counter++)
                    {
                        distance = speed * counter;
                        cout<<" "<<counter<<"            "<<distance<<endl;
                    }
                    
                    return 0;
        } 
            case '6':{
                cout<<"We are in Problem 6"<<endl;
                    int days = 1;
                    float salary = 0.0;
                    float totPay = 0.0;
                    float money = 1.0;

                    //Input data
                    cout<<"Input the number of days worked: ";
                    cin>>days;

                    while (days < 0)
                    {
                        cout<<"Enter a POSITIVE number of days worked: "<<endl;
                        cin>>days;
                    }

                    cout<<"Days     Salary      Total Pay"<<endl;
                    cout<<"------------------------------"<<endl;

                    //Map inputs to outputs or process the data
                    for(int counter = 1; counter <= days; counter++)
                    {
                        salary = money / 100;
                        totPay = totPay + salary;
                        cout<<" "<<counter<<"       $"<<salary<<"       $"<<totPay<<endl;
                        money *= 2;
                    }
                    //Output the transformed data

                    //Exit stage right!
                    return 0;
            }
            case '7':{
                cout<<"We are in Problem 7"<<endl;
                    int floors;
                    int rooms;
                    int occupied;
                    int totRooms = 0;
                    int totOcc = 0;
                    int totUnocc;
                    float percentage;

                    //Input data
                    cout<<"This program will calculate the occupancy rate for a hotel."<<endl;
                    cout<<"Enter how many floors the hotel has: "<<endl;
                    cin>>floors;
                    cout<<endl;

                    //Map inputs to outputs or process the data

                    while(floors<1)
                    {
                        cout<<"Enter a value greater than one for the number of floors"<<endl;
                        cin>>floors;
                    }

                    for(int counter = 1; counter <= floors; counter++)
                    {
                        if (floors == 13)
                            continue;
                        cout<<"Enter the number of rooms on floor "<<counter<<": ";
                        cin>>rooms;

                        while(rooms < 10)
                        {
                            cout<<"Enter more than 10 rooms: ";
                            cin>>rooms;
                        }

                        cout<<"How many of the "<<rooms<<" rooms are occupied? ";
                        cin>>occupied;

                        totRooms += rooms;
                        totOcc += occupied;
                    }

                    //Output the transformed data
                    totUnocc = totRooms - totOcc;
                    percentage = static_cast<float>(totOcc) * 100 / totRooms;

                    cout<<endl;
                    cout<<"The hotel has "<<totRooms<<" rooms."<<endl;
                    cout<<totOcc<<" rooms are occupied."<<endl;
                    cout<<totUnocc<<" rooms are unoccupied."<<endl;
                    cout<<percentage<<"% of rooms are occupied."<<endl;

                    //Exit stage right!
                    return 0;
            }
            case '8':{
                cout<<"We are in Problem 8"<<endl;
                    int years;
                    float inches;
                    int numMon;
                    float totInch;
                    float avgRain;

                    //Input data
                    cout<<"Enter the number of years: "<<endl;
                    cin>>years;

                    numMon = years * 12;

                    while (years<1)
                    {
                        cout<<"Invalid. Enter a number greater than 1. "<<endl;
                        cin>>years;
                    }

                    for(int i=1; i<=years; i++)
                    {
                        for(int c=1; c<=12; c++)
                        {
                            cout<<"Enter the inches of rainfall for month "<<c<<": "<<endl;
                            cin>>inches;

                            while (inches < 0)
                            {
                                cout<<"Enter a positive number for the inches of rainfall"<<endl;
                                cin>>inches;
                            }

                            totInch+=inches;
                        }
                    }

                    avgRain = totInch/numMon;

                    cout<<"Number of months = "<<numMon<<endl;
                    cout<<"Total inches of rainfall = "<<totInch<<endl;
                    cout<<"Average inches of rainfall per month = "<<avgRain<<endl;
                    return 0;
            }
            case '9':{
                cout<<"We are in Problem 9"<<endl;
                    float nOrg; //number of organisms
                    int increase; //daily population increase as a percentage
                    float percInc; //percentage increase
                    int days; //number of days they will multiply
                    float pop; //population

                    //Input data
                    cout<<"This program will predict the size of a population of organisms"<<endl;

                    cout<<"Enter the starting number of organisms: ";
                    cin>>nOrg;
                    while(nOrg<2)
                    {
                        cout<<"Enter a number greater than 2 for the starting number of organisms."<<endl;
                        cin>>nOrg;
                    }

                    cout<<"Enter the average daily increase of the population as a percentage: ";
                    cin>>increase;
                    while(increase<0)
                    {
                        cout<<"Enter a percentage greater than 0 for the daily increase."<<endl;
                        cin>>increase;
                    }

                    cout<<"Enter the number of days the population will multiply: ";
                    cin>>days;
                    while(days<0)
                    {
                        cout<<"Enter a number greater than 1 for the number of days."<<endl;
                        cin>>days;
                    }


                    //Map inputs to outputs or process the data
                    percInc = increase/100.0f;

                    //Output the transformed data
                    cout<<"Day    Population Size"<<endl;

                    for(int i=1; i<=days; i++)
                    {
                        pop = nOrg * percInc + nOrg;
                        cout<<"Day "<<i<<": "<<pop<<" organisms"<<endl;

                        nOrg=pop;
                    }

                    //Exit stage right!
                    return 0;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
       
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}