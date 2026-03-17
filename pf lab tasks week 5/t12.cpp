#include <iostream>
using namespace std;
int main() {
    string username = "admin";
    string password = "123";
    string inputUser, inputPass;
    bool loggedIn = false;

    cout << "--- University Management System Login ---" << endl;

    // Allow 3 login attempts
    for (int i = 1; i <= 3; i++) {
        cout << "Attempt " << i << " of 3" << endl;
        cout << "Enter Username: ";
        cin >> inputUser;
        cout << "Enter Password: ";
        cin >> inputPass;

        if (inputUser == username && inputPass == password) {
            cout << "\nLogin Successful! Welcome to the System." << endl;
            loggedIn = true;
            break; // Exit the loop if login is correct
        } else {
            cout << "Incorrect credentials." << endl;
            if (i < 3) {
                cout << "Please try again.\n" << endl;
            }
        }
    }

    if (!loggedIn) {
        cout << "\nAccess Denied. You have exceeded maximum attempts." << endl;
    return 0;

    }
}
    for(int i=1; i<=5;i++){


}