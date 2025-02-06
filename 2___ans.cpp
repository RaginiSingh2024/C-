11. Program to Count Even and Odd Numbers in an Array
#include <iostream>
using namespace std;

int main() {
    int arr[8], evenCount = 0, oddCount = 0;

    // Input 8 integers
    cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    // Count even and odd numbers
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the counts
    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;

    return 0;
}

