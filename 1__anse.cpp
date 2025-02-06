19. Simulate Online Purchase with Exceptions
#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidCardException : public exception {
    const char* what() const throw() {
        return "Invalid debit card number!";
    }
};

class InsufficientFundsException : public exception {
    const char* what() const throw() {
        return "Insufficient funds!";
    }
};

int main() {
    string cardNumber;
    double balance, amount;

    // Input debit card number, balance and purchase amount
    cout << "Enter Debit Card Number: ";
    cin >> cardNumber;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter purchase amount: ";
    cin >> amount;

    try {
        // Check for invalid card number (for simplicity, assuming length of valid card number should be 16)
        if (cardNumber.length() != 16) {
            throw InvalidCardException();
        }

        // Check if balance is sufficient
        if (balance < amount) {
            throw InsufficientFundsException();
        }

        // Process the purchase
        balance -= amount;
        cout << "Purchase successful! Remaining balance: " << balance << endl;
    }
    catch (const InvalidCardException& e) {
        cout << e.what() << endl;
    }
    catch (const InsufficientFundsException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
