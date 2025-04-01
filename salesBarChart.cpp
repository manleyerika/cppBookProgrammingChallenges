/*
Programmer: Erika Manley
Date: 3/16/2025
Version: 1.0
Programming Challenge from Tony Gaddis's
"Starting Out with C++" book (Q17, pg300):
Sales Bar Chart
Write a program that asks the user to enter today's sales for five stores.
The program should then display a bar graph comparing each store's sales.
Create each bar in the bar graph by displaying a row of asterisks.
Each asterisk should represent $100 of sales. 
Here is an example of the program's output:
Enter today's sales for store 1: 1000 
Enter today's sales for store 2: 1200
Enter today's sales for store 3: 1800
Enter today's sales for store 4: 800
Enter today's sales for store 5: 1900

SALES BAR CHART
(Each * = $100) 
Store 1: **********
Store 2: ************
Store 3: ******************
Store 4: ********
Store 5: *******************
*/

#include <iostream>
using namespace std;

int main() {

    
    int sales[5]; //sales array
    int stars; //how many stars to display

    //get today's sales for 5 stores
    for (int i = 1; i <= 5; i++) {
        
        //input validation
        do {
            cout << "Enter today's sales for store " << i << ": ";
            cin >> sales[i-1];
        } while (sales[i-1] < 0);   
    }

    //display sales bar chart for 5 stores
    cout << "\n";
    cout << "\nSALES BAR CHART";
    cout << "\n(Each * = $100)\n";
    
    for (int i = 0; i < 5; i++) {
        
        cout << "Store " << i + 1 << ": ";
        stars = sales[i]/100;
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }

}