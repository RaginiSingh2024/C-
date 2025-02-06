
// 1 Bank Account class with exception handling for withdrawal.
#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) {
        if (initial_balance < 0)
            throw invalid_argument("Initial balance cannot be negative.");
        balance = initial_balance;
    }

    void withdraw(double amount) {
        if (amount > balance)
            throw runtime_error("Insufficient balance.");
        balance -= amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    try {
        BankAccount account(500);
        account.withdraw(600); // Exception will be thrown
        cout << "Balance after withdrawal: " << account.getBalance() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}