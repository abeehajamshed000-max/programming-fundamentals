#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> jazzify(const vector<string>& chords) {
    vector<string> result;
    for (const string& chord : chords) {
        if (chord.length() >= 1 && chord.substr(chord.length() - 1) != "7") {
            result.push_back(chord + "7");
        } else {
            result.push_back(chord);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;
    cin.ignore();

    vector<string> chords(n);
    cout << "Enter " << n << " chords, one per line:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, chords[i]);
    }

    vector<string> jazzified = jazzify(chords);
    cout << "Jazzified chords: [";
    for (size_t i = 0; i < jazzified.size(); i++) {
        cout << "\"" << jazzified[i] << "\"";
        if (i != jazzified.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
