31. Result-Sheet Program Using Student Class
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int sub1, sub2, sub3, total;

    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore(); // To clear the buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter marks for Subject 2: ";
        cin >> sub2;
        cout << "Enter marks for Subject 3: ";
        cin >> sub3;
        total = sub1 + sub2 + sub3;
    }

    void displayResult() {
        cout << "=========================================\n";
        cout << "Roll No.  Name     S1  S2  S3  Total\n";
        cout << "=========================================\n";
        cout << roll << "     " << name << "   " << sub1 << "  " << sub2 << "  " << sub3 << "  " << total << endl;
        cout << "=========================================\n";
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayResult();

    return 0;
}
