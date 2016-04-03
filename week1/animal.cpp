/* 
  Author: Jessie Gaviola
  Date: 3/28/16
  Description: This program prints a favorite animal to the console
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

// a simple example program
int main()
{
   // Get the favorite animal	
   std::string faveAnimal;
   cout << "Please enter your favorite animal." << endl;
   cin >> faveAnimal;

   // Display the favorite animal
   cout << "Your favorite animal is the " << faveAnimal;
   cout << "." << endl;

	return 0;
}
