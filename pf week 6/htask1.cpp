#include <iostream>
using namespace std;

// Function to calculate the sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    
    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call function and print sum
    cout << "Sum of all elements: " << sumArray(arr, n) << endl;
    
    return 0;
}
