#include <iostream>
#include <iomanip>
using namespace std;


float calculateBalance(float balance, int years) {
    float interestRate = 0;

    
    if (balance < 10000)
        interestRate = 5;
    else if (balance >= 10000 && balance <= 50000)
        interestRate = 7;
    else
        interestRate = 10;


    if (years >= 3)
        interestRate = interestRate + 2;

    float interestAmount = balance * interestRate / 100;
    float updatedBalance = balance + interestAmount;
    return updatedBalance;
}

int main() {
    float balance;
    int years;

    cout << "Enter Balance and years:" << endl;
    cin >> balance;
    cin >> years;

    float newBalance = calculateBalance(balance, years);

    cout << fixed << setprecision(1);
    cout << "Updated Balance: " << newBalance << endl;

    return 0;
}