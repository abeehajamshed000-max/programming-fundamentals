#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}


bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    if (sum == originalNum)
        return true;
    else
        return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isStrong(number))
        cout << "Strong Number" << endl;
    else
        cout << "Not Strong Number" << endl;

    return 0;
}