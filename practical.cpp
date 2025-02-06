//Take 10 intergers insert an element how to print it??

#include <iostream>
using namespace std;

int main() {}
    int arr[10]; // Declare an array of size 10
    int element, position;

    // Input the elements for the array
    cout << "Enter 10 integers: \n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Input the element to insert and the position where it should be inserted
    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert the element (0-9): ";
    cin >> position;

    // Insert the element by shifting elements to the right
    if (position >= 0 && position < 10) {
        // Shift elements to t

}