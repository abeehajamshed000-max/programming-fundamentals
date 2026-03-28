#include <iostream>
#include <string>
using namespace std;

string removeVowels(string str) {
    string result = "";
    for (char c : str) {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "String with vowels removed: " << removeVowels(input) << endl;
    return 0;
}
