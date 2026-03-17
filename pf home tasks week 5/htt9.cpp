#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inheritedMoney;
    int targetYear;
    int ivanAge = 18;

    // Reading input
    cin >> inheritedMoney;
    cin >> targetYear;

    // Loop through each year from 1800 to the target year (inclusive)
    for (int currentYear = 1800; currentYear <= targetYear; currentYear++) {
        if (currentYear % 2 == 0) {
            // Even year spending
            inheritedMoney -= 12000;
        } else {
            // Odd year spending: 12000 + 50 * age
            inheritedMoney -= (12000 + 50 * ivanAge);
        }
        
        // Ivan ages by one year every year
        ivanAge++;
    }

    // Setting the output to two decimal places
    cout << fixed << setprecision(2);

    if (inheritedMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " << inheritedMoney << " dollars left." << endl;
    } else {
        // Use abs() or multiply by -1 to show the needed amount as a positive number
        cout << "He will need " << -inheritedMoney << " dollars to survive." << endl;
    }

    return 0;
}