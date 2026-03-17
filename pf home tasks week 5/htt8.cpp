
#include <iostream>

using namespace std;

int main() {
    int age;
    double washerPrice, toyPrice;

    // Input data
    cin >> age >> washerPrice >> toyPrice;

    double savedMoney = 0;
    int toyCount = 0;
    double birthdayMoney = 10.00;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            // Even birthdays: she gets money
            savedMoney += birthdayMoney;
            savedMoney -= 1; // Her brother takes 1 USD
            birthdayMoney += 10.00; // Next money gift increases by 10
        } else {
            // Odd birthdays: she gets a toy
            toyCount++;
        }
    }

    // Sell the toys and add to total savings
    savedMoney += (toyCount * toyPrice);

    // Final Output logic
    if (savedMoney >= washerPrice) {
        cout << "Yes!" << endl;
        cout << fixed  << (savedMoney - washerPrice) << endl;
    } else {
        cout << "No!" << endl;
        cout << fixed <<   (washerPrice - savedMoney) << endl;
    }

    return 0;
}
