#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

/**
 * @class BankAccount
 * @brief Manages a customer's checking and savings accounts.
 */
class BankAccount {
private:
    std::string customerName;     // Customer's full name
    double checkingBalance;       // Balance in checking account
    double savingsBalance;        // Balance in savings account

public:
    // Constructor
    BankAccount(std::string newName, double chBalance, double sBalance);

    // Setters
    void SetName(std::string newName);
    void SetChecking(double balance);
    void SetSavings(double balance);

    // Getters
    std::string GetName();
    double GetChecking();
    double GetSavings();

    // Account operations
    void DepositChecking(double amount);
    void DepositSavings(double amount);
    void WithdrawChecking(double amount);
    void WithdrawSavings(double amount);
    void TransferToSavings(double amount);
};

#endif // BANKACCOUNT_H
