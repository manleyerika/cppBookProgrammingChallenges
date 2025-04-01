/*
Programmer: Erika Manley
Date: 3/16/2025
Version: 1.0
Programming Challenge from Tony Gaddis's
"Starting Out with C++" book (Q10, pg299):
Average Rainfall
Write a program that uses nested loops to collect data and
calculate the average rainfall over a period of years. 
The program should first ask for the number of years. 
The outer loop wil iterate once for each year. 
The inner loop wil iterate 12 times, once for each month. 
Each iteration of the inner loop will ask the user 
for the inches of rainfall for that month.
After all iterations, the program should display the number of months,
the total inches of rainfall, and the average rainfall per month for the entire period.
Input Validation: Do not accept a number less than 1 for the number of years.
Do not accept negative numbers for the monthly rainfall.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void getAverageRainfall(int);

int main() {
    
    //variables
    int years;

    //get user input and validate it
    do {
        cout << "How many years have you collected rainfall data?: ";
        cin >> years;
    } while (years < 1);

    //get average rainfall over a period of specified years
    getAverageRainfall(years);
}

void getAverageRainfall(int numOfYears) {

    //variables 
    int numOfMonths = 0;
    double inchesOfRainfall = 0.0;
    double totalInchesOfRainfall = 0.0;
    double avgRainfall = 0.0;

    for (int year = 1; year <= numOfYears; year++) 
    {
        for (int month = 1; month <= 12; month++) 
        {

            //count the number of months
            numOfMonths += 1;

            //input validation
            do {
                cout << "\nPlease enter the inches of rainfall for ";
                cout << "month " << month << ", year " << year << ": ";
                cin >> inchesOfRainfall;
            } while (inchesOfRainfall < 0.0);

            //calculate the total inches of rainfall
            totalInchesOfRainfall += inchesOfRainfall;

        } 
    }

    //display the number of months
    cout << "\nRainfall data was collected for " << numOfMonths << " months.";

    //display the total inches of rainfall
    cout << "\nThe total inches of rainfall collected over ";
    cout << numOfMonths << " months was " << totalInchesOfRainfall;
    cout << " inches.";

    //calculate the average rainfall per month for the number of years
    //and display it
    avgRainfall = totalInchesOfRainfall/numOfMonths;
    cout << "\nThe average rainfall per month for ";
    cout << numOfYears << " year/years is ";
    cout << setprecision(2) << fixed;
    cout << avgRainfall << " inches/month.";

}


