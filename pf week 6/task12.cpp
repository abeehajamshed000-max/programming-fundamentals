#include <iostream>
using namespace std;

bool isSpecialArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) { // even index
            if (arr[i] % 2 != 0) return false;
        } else { // odd index
            if (arr[i] % 2 == 0) return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Is Special Array: " << (isSpecialArray(arr, size) ? "true" : "false") << endl;
    return 0;
}
