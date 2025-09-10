#include "BankAccount.h"

// Constructor: Initializes customer name and account balances
BankAccount::BankAccount(std::string newName, double chBalance, double sBalance) {
    customerName = newName;
    checkingBalance = chBalance;
    savingsBalance = sBalance;
}

// Sets the customer's name
void BankAccount::SetName(std::string newName) {
    customerName = newName;
}

// Returns the customer's name
std::string BankAccount::GetName() {
    return customerName;
}

// Sets the checking account balance
void BankAccount::SetChecking(double balance) {
    checkingBalance = balance;
}

// Returns the checking account balance
double BankAccount::GetChecking() {
    return checkingBalance;
}

// Sets the savings account balance
void BankAccount::SetSavings(double balance) {
    savingsBalance = balance;
}

// Returns the savings account balance
double BankAccount::GetSavings() {
    return savingsBalance;
}

// Deposits a positive amount into the checking account
void BankAccount::DepositChecking(double amount) {
    if (amount > 0) {
        checkingBalance += amount;
    }
}

// Deposits a positive amount into the savings account
void BankAccount::DepositSavings(double amount) {
    if (amount > 0) {
        savingsBalance += amount;
    }
}

// Withdraws a positive amount from the checking account
void BankAccount::WithdrawChecking(double amount) {
    if (amount > 0) {
        checkingBalance -= amount;
    }
}

// Withdraws a positive amount from the savings account
void BankAccount::WithdrawSavings(double amount) {
    if (amount > 0) {
        savingsBalance -= amount;
    }
}

// Transfers a positive amount from checking to savings
void BankAccount::TransferToSavings(double amount) {
    if (amount > 0) {
        checkingBalance -= amount;
        savingsBalance += amount;
    }
}
