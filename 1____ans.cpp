
23. Array Analysis (Positive, Negative, Odd, Even, Zero Count)
#include <iostream>
using namespace std;

int main() {
    int arr[20];
    int positive = 0, negative = 0, odd = 0, even = 0, zeros = 0;

    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 20; i++) {
        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
        else zeros++;

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Odd numbers: " << odd << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Zeros: " << zeros << endl;

    return 0;
}



