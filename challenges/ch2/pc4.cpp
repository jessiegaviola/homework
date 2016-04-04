/*
 *   Restaurant Bill
 *
 *   Write a program that computes the tax and tip on a
 *   restaurant bill for a patron with a $44.50 meal
 *   charge. The Tax should be 6.75 percent of the meal
 *   cost. The tip should be 15 percent of the total
 *   after adding the tax. Display the meal cost,
 *   tax amount, tip amount, and total bill on the screen.
 *
 */

#include <iostream>
using namespace std;

int main()
{
    double tax, tip, meal, total;

    meal = 44.50;
    tax = .0675;
    tip = .15;

    cout << "The restaurant bill is $" << meal << endl;
    tax = tax * meal;
    cout << "The tax amount is $" << tax << endl;
    tip = tip * meal;
    cout << "The tip amount is $" << tip << endl;
    total = meal + tax + tip;
    cout << "The total bill is $" << total << endl;

    return 0;
}
