#include <iostream>
using namespace std;

// Function Prototype
bool isSymmetrical(int num);

int main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (isSymmetrical(num))
        cout << "The number is symmetrical." << endl;
    else
        cout << "The number is not symmetrical." << endl;

    return 0;
}

// Function Definition
bool isSymmetrical(int num)
{
    int firstDigit = num / 100;      // e.g. 232 / 100 = 2
    int lastDigit  = num % 10;       // e.g. 232 % 10  = 2

    if (firstDigit == lastDigit)
        return true;
    else
        return false;
}
