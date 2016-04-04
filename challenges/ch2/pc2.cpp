/*   Sales Prediction
 *
 *   The east coast sales division of a company generates
 *   62 percent of total sales. Based on that percentage
 *   write a program that will predict how much the east
 *   coast division will generate if the company has 
 *   $4.6 million in sales this year. Display the results
 *   on the screen.
 */

#include <iostream>
using namespace std;

int main()
{
    double percent, sales, total;
    percent = .62;
    sales = 4.6;
    total = percent * sales;

    cout << "Total sales is $" << total << " million." << endl;
   return 0;
}

