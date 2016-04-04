// program calculates how much a little league baseball
// team spent last year to purchase new baseballs

#include <iostream>

using namespace std;

int main()
{
    double baseball, baseballCost, total;

    cout << "How many baseball's were purchased?\n";
    cin >> baseball;

    cout << "How much does each baseball cost?\n";
    cin >> baseballCost;

    total = baseball * baseballCost;
    cout << "Total amount spent is $" << total << endl;

    return 0;
}


