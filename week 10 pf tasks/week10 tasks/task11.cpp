#include <iostream>
using namespace std;


string checkAlphabetCase(char ch);

int main()
{
    char ch;
    cout << "Enter a character (A/a): ";
    cin >> ch;

    cout << checkAlphabetCase(ch) << endl;

    return 0;
}

string checkAlphabetCase(char ch)
{
    if (ch == 'A')
        return "You have entered Capital A";
    else
        return "You have entered small a";
}
