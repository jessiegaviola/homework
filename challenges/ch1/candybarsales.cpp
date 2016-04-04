/*
 * Candy Bar Sales
 */

#include <iostream>

using namespace std;

// This program calculates total funds earned from candy sales

int main()
{
   double candySold, candyPrice, totalFunds;

   cout << "Enter the number of candy bars sold.\n";
   cin >> candySold;

   cout << "Enter the price for each Candy bar sold.\n";
   cin >> candyPrice;

   totalFunds = candySold * candyPrice;
   cout << "The total amount earned is $" << totalFunds << endl;

   return 0;
}

