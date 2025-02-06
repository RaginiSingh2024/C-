13. Explain Pointer Arithmetic
#include <iostream>
using namespace std;

int main() {
    int num1, num2, product;

    // Taking input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Pointers to the input numbers
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    // Calculating the product using pointer arithmetic
    product = (*ptr1) * (*ptr2);

    cout << "Product of " << *ptr1 << " and " << *ptr2 << " is: " << product << endl;

    return 0;
}
