24. Factorial Class with Exception Handling
#include <iostream>
#include <stdexcept>
using namespace std;

class Factorial {
public:
    int fact(int n) {
        if (n <= 0) {
            throw invalid_argument("Number must be positive.");
        }
        if (n == 1) return 1;
        return n * fact(n - 1);
    }
};

int main() {
    Factorial f;
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    try {
        cout << "Factorial: " << f.fact(num) << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
