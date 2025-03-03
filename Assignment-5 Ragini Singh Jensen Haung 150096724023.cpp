//Q.1 Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;  // Account number (as string to allow for alphanumeric account numbers)
    double balance;        // Account balance

public:
    // Constructor to initialize account number and balance
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;

        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
    }

    // Function to display the account details
    void displayAccountDetails() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create an account with initial values
    BankAccount account1("123456789", 1000.00);
    
    // Display account details
    account1.displayAccountDetails();

    // Deposit money into the account
    account1.deposit(500.00);
    account1.displayAccountDetails();

    // Withdraw money from the account
    account1.withdraw(200.00);
    account1.displayAccountDetails();

    // Attempt to withdraw an invalid amount
    account1.withdraw(2000.00);  // Exceeds balance
    account1.withdraw(-50.00);   // Invalid amount

    return 0;
}
