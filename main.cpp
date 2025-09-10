#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    // Create a bank account for John Doe
    BankAccount account("John Doe", 500.00, 1000.00);

    // Display initial balances
    cout << "Customer Name: " << account.GetName() << endl;
    cout << "Initial Checking Balance: $" << account.GetChecking() << endl;
    cout << "Initial Savings Balance: $" << account.GetSavings() << endl;

    // Deposit into checking and savings
    account.DepositChecking(200.00);
    account.DepositSavings(150.00);

    // Withdraw from checking and savings
    account.WithdrawChecking(50.00);
    account.WithdrawSavings(100.00);

    // Transfer from checking to savings
    account.TransferToSavings(75.00);

    // Display final balances
    cout << "\nAfter Transactions:" << endl;
    cout << "Checking Balance: $" << account.GetChecking() << endl;
    cout << "Savings Balance: $" << account.GetSavings() << endl;

    return 0;
}
