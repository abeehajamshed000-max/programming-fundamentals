#include <iostream>
using namespace std;

int findMaxMin(int arr[], int n, int &maxNum, int &minNum) {
    maxNum = arr[0];
    minNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum)
            maxNum = arr[i];
        if (arr[i] < minNum)
            minNum = arr[i];
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxNum, minNum;
    findMaxMin(arr, n, maxNum, minNum);

    cout << "Largest Number: " << maxNum << endl;
    cout << "Smallest Number: " << minNum << endl;

    return 0;
}
