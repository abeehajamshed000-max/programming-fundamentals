
#include <iostream>
using namespace std;

int main() {

    int pin = 1234;
    int enteredPin;
    int balance = 1000; // Starting balance
    int choice;
    int amount;
    bool loggedIn = false;

    // Requirement: 3 attempts using a for loop
    for (int i = 1; i <= 3; i++) {
        cout << "Enter your ATM PIN (Attempt " << i << "): ";
        cin >> enteredPin;

        // Requirement: logical operator (==)
        if (enteredPin == pin) {
            cout << "Login Successful!\n" << endl;
            loggedIn = true;
            break; // Exit the loop if PIN is correct
        } else {
            cout << "Incorrect PIN." << endl;
            if (i == 3) {
                cout << "Too many failed attempts. Program terminated." << endl;
            }
        }
    }

    // Only show the menu if the user logged in successfully
    if (loggedIn) {
        // Simple ATM Menu
        cout << "--- ATM Menu ---" << endl;
        cout << "1 -> Check Balance" << endl;
        cout << "2 -> Deposit Money" << endl;
        cout << "3 -> Withdraw Money" << endl;
        cout << "4 -> Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your current balance is: " << balance << endl;
        } 
        else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance = balance + amount;
            cout << "New balance: " << balance << endl;
        } 
        else if (choice == 3) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            
            // Requirement: Check for sufficient balance
            if (amount <= balance && amount > 0) {
                balance = balance - amount;
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;
            } else {
                cout << "Insufficient Balance" << endl;
            }
        } 
        else if (choice == 4) {
            cout << "Exiting... Thank you!" << endl;
        } 
        else {
            cout << "Invalid selection." << endl;
        }
    }

    return 0;
}