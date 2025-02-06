// 5. Write a program to demonstrate function overloading by creating three functions
// named max:
// int max(int a, int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.
#include <iostream>
using namespace std;

// Function to find the larger of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the larger of two double values
double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    double double1, double2;

    // Taking user input for integers
    cout << "Enter first integer: ";
    cin >> int1;
    cout << "Enter second integer: ";
    cin >> int2;

    // Call the integer version of max and display the result
    cout << "The larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;

    // Taking user input for double values
    cout << "Enter first double value: ";
    cin >> double1;
    cout << "Enter second double value: ";
    cin >> double2;

    // Call the double version of max and display the result
    cout << "The larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

    return 0;
}
