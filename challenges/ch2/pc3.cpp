/*
 *   Sales Tax
 *
 *   Write a program that computes the total sales tax on
 *   a $52 purchase. Assume the state sales tax is 4 percent
 *   and the county sales tax is 2 percent. Display the
 *   purchase price, state tax, county tax, and total tax
 *   amounts on the screen.
 */

#include <iostream>
using namespace std;

int main()
{
    double price;
    double stateTax, countyTax, totalTax;

    price = 52;
    stateTax = .04;
    countyTax = .02;
    totalTax = .06;

    cout << "The purchase price is $" << price << endl;
    stateTax = stateTax * price;
    cout << "The state tax on a $52 purchase is " << stateTax << endl;
    countyTax = countyTax * price;
    cout << "The county tax on a $52 purchase is " << countyTax << endl;
    totalTax = totalTax * price;
    cout << "Total tax on a $52 purchase is " << totalTax << endl;

    return 0;
}

