/*
 * Author: Jessie Gaviola
 * Date: 4/6/16
 * Description: Project 2b
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// This program converts Celsius temperatures to Fahrenheit temperatures

int main()
{
   double celsius, fahrenheit;
   
   // Have user enter Celsius temperature
   cout << "Please enter a Celsius temperature." << endl;
   cin >> celsius;
   
   // Formula used to convert Celsius to Fahrenheit	   
   fahrenheit = (celsius * 9.0) / 5.0 + 32.0;

   // Print out Fahrenheit
   cout << "The equivalent Fahrenheit temperature is:\n";
   cout << fahrenheit << endl;

   return 0;

}

