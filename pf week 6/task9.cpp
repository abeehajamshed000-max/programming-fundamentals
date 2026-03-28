#include <iostream>
using namespace std;

int main() {
    char word[100];
    cout << "Enter a string: ";
    cin >> word;

    // First, find the length of the word manually
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }

    cout << "Reversed String: ";
    // Loop backwards from the last character
    for (int i = length - 1; i >= 0; i--) {
        cout << word[i];
    }

    cout << endl;
    return 0;
}