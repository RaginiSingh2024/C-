// 10. Program to Calculate the Sum of Array Elements
#include <iostream>
using namespace std;

int main() {
    int arr[6], sum = 0;
    
    // Input 6 integers
    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }

    // Output the sum
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
