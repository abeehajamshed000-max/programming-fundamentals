#include <iostream>

using namespace std;


string oddishOrEvenish(int num);

int main()
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    cout << oddishOrEvenish(num) << endl;

    return 0;
}


string oddishOrEvenish(int num)
{
    int sum = 0;

    // Extract and sum each digit one by one
    while (num > 0)
    {
        int digit = num % 10;   
        sum += digit;          
        num = num / 10;         
    }

    if (sum % 2 != 0)
        return "Oddish";
    else
        return "Evenish";
}
