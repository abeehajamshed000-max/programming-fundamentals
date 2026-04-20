#include <iostream>
using namespace std;


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
bool isSymmetrical(int num)
{
    int firstDigit = num / 100;      
    int lastDigit  = num % 10;   

    if (firstDigit == lastDigit)
        return true;
    else
        return false;
}
