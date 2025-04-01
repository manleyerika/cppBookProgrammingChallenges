/*
Programmer: Erika Manley
Date: 3/16/2025
Version: 1.0
Programming Challenge from Tony Gaddis's
"Starting Out with C++" book (Q13, pg299):
"The Greatest and Least of These
Write a program with a loop that lets the user enter a series of integers.
The user should enter -99 to signal the end of the series.
After all the numbers have been entered,
the program should display the largest and smallest numbers entered."
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Please enter a series of integers." << endl;
    cout << "Please enter -99 to signal the end of the series." << endl;

    //variables
    int integer, minNumber, maxNumber; 

    cout << "\nPlease enter an integer: ";
    cin >> integer;

    //assign minNumber and maxNumber
    //to first integer value
    minNumber = integer;
    maxNumber = integer;
    

    while (integer != -99)
    {
        //get a new integer
        cout << "Please enter another integer: ";
        cin >> integer;

        //reevaluate minNumber and maxNumber
        if (integer != -99) //-99 as sentinel
        {
            if (integer < minNumber) {
                minNumber = integer;
            }

            if (integer > maxNumber) {
                maxNumber = integer;
            }

        } 

    }//end while

    //output the largest and smallest numbers entered
    if (maxNumber != -99 && minNumber != -99)
    {
        cout << "\nThe largest number in the series is " << maxNumber;
        cout << "\nThe smallest number in the series is " << minNumber;
    }
    else
    {
        cout << "\nPlease run the program again and enter an integer \n";
        cout << "other than -99 as the first integer in the series \n";
        cout << "to have the largest number and \n";
        cout << "smallest number in the series be displayed.";
    }

    return 0;
}