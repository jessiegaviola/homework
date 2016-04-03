/* 
 * Author: Jessie Gaviola
 * Date: 4/6/16
 * Description: Assignment 2A
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// This program will calculate the average of five numbers

int main()
{
    double num1, num2, num3, num4, num5, avg;

    // Ask user to enter five numbers
    cout << "Please enter five numbers.\n";
	    
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    
    // Calculate average of the five numbers
    avg = (num1 + num2 + num3 + num4 + num5) / 5;
    
    // Display the average
    cout << "The average of those numbers is:" << endl;
    cout << avg << endl;

    return 0;
}
