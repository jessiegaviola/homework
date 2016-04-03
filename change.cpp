/*
 *  Author: Jessie Gaviola
 *  Date: 4/6/16
 *  Description: Project 2c 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// This program calculates the amount of coins that fits into change 

int main()
{

   int change, quarter, dime, nickel, penny;

   cout << "Please enter an amount in cents less than a dollar.\n";
   cin >> change;
   cout << "Your change will be:" << endl;
   
   // calculates change using division and modulo
   quarter = change / 25;
   change = change % 25;
   dime = change / 10;
   change = change % 10;
   nickel = change / 5;
   penny = change % 5;

   // displays change
   cout << "Q: " << quarter << endl;
   cout << "D: " << dime << endl;
   cout << "N: " << nickel << endl;
   cout << "P: " << penny << endl;

   return 0;
}
