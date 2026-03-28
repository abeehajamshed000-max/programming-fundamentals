#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    string students[n];
    cout << "Enter names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, students[i]);
    }

    // Bubble sort for alphabetical order
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (students[j] > students[j+1]) {
                swap(students[j], students[j+1]);
            }
        }
    }

    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i] << endl;
    }
    return 0;
}
