22. Student Grading System
#include <iostream>
using namespace std;

int main() {
    double percentage;

    cout << "Enter the student's percentage: ";
    cin >> percentage;

    if (percentage >= 90) {
        cout << "Grade A\n";
    }
    else if (percentage >= 75) {
        cout << "Grade B\n";
    }
    else if (percentage >= 50) {
        cout << "Grade C\n";
    }
    else {
        cout << "Grade F\n";
    }

    return 0;
}
