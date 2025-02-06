20. Calculate the Greatest Among Three Numbers Using else if Ladder

#include <iostream>
using namespace std;

class Max {
public:
    void findMax(int a, int b, int c) {
        if (a >= b && a >= c) {
            cout << "The largest number is: " << a << endl;
        } else if (b >= a && b >= c) {
            cout << "The largest number is: " << b << endl;
        } else {
            cout << "The largest number is: " << c << endl;
        }
    }
};

int main() {
    Max obj;
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    obj.findMax(num1, num2, num3);

    return 0;
}
