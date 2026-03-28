#include <iostream>
using namespace std;

void productInventory(string productNames[], double prices[], int quantity[], int n) {
    for (int i = 0; i < n; i++) {
        double total_value = prices[i] * quantity[i];
        cout << productNames[i] << ": $" << prices[i] << ", " << quantity[i] << " in stock, Total value: $" << total_value << endl;
    }
}

int main() {
    int n = 4;
    string productNames[] = {"Apple", "Banana", "Orange", "Mango"};
    double prices[] = {0.5, 0.3, 0.8, 1.2};
    int quantity[] = {50, 100, 30, 20};

    productInventory(productNames, prices, quantity, n);
    return 0;
}
