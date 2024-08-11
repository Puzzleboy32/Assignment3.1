#include <iostream>

using namespace std;

// Function to check balance normally without modification
void checkBalanceNormal(int terroristFunds, int coffeeShopFunds) {
    cout << "Normal Balance Check:" << endl;
    cout << "Terrorist Funds: $" << terroristFunds << endl;
    cout << "Coffee Shop Funds: $" << coffeeShopFunds << endl;
}

// Function to check balance and hack/switch funds by reference
void checkBalanceHacked(int& terroristFunds, int& coffeeShopFunds) {
    cout << "Hacked Balance Check:" << endl;
    cout << "Original Terrorist Funds: $" << terroristFunds << endl;
    cout << "Original Coffee Shop Funds: $" << coffeeShopFunds << endl;

    // Simulate hacking process (replace with actual hacking logic)
    cout << "Hacking in progress..." << endl;

    // Swap funds
    int temp = terroristFunds;
    terroristFunds = coffeeShopFunds;
    coffeeShopFunds = temp;

    cout << "New Terrorist Funds: $" << terroristFunds << endl;
    cout << "New Coffee Shop Funds: $" << coffeeShopFunds << endl;
}

int main() {
    // Initialize account balances
    int terroristFunds = 1000000;
    int coffeeShopFunds = 1000;

    // Print original balances
    cout << "Initial Balances:" << endl;
    cout << "Terrorist Funds: $" << terroristFunds << endl;
    cout << "Coffee Shop Funds: $" << coffeeShopFunds << endl << endl;

    // Normal balance check
    checkBalanceNormal(terroristFunds, coffeeShopFunds);
    cout << endl;

    // Hacked balance check
    checkBalanceHacked(terroristFunds, coffeeShopFunds);

    return 0;
}