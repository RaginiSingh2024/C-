27. Pattern Printing Program
#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
