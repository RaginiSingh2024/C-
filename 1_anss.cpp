// 8. Program to Initialize and Print the First 10 Natural Numbers
#include <iostream>
using namespace std;

int main() {
    int arr[10];

    // Initialize the array with the first 10 natural numbers
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Print the elements of the array
    cout << "The first 10 natural numbers are: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}



