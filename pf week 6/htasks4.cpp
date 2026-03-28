#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of flights
    cout << "Enter number of flights: ";
    cin >> n;

    // Arrays to store flight data
    int flightNumber[n];
    string destination[n];
    int seatsAvailable[n];

    // Input flight details
    for (int i = 0; i < n; i++) {
        cout << "Enter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];
        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin.ignore(); // To handle newline in input buffer
        getline(cin, destination[i]);
        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }

    // Display flight information
    cout << "\nFlight Information:\n";
    for (int i = 0; i < n; i++) {
        cout << "Flight " << flightNumber[i] << " to " << destination[i] 
             << " has " << seatsAvailable[i] << " seats available." << endl;
    }

    // Find and display flights with seats < 5
    cout << "\nFlights with seats less than 5:\n";
    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << "Flight " << flightNumber[i] << " to " << destination[i] 
                 << " has " << seatsAvailable[i] << " seats." << endl;
        }
    }

    return 0;
}
