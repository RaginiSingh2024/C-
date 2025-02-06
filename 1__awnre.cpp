28. Student Management System (Menu-Driven)
#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int sid;
    string sname;
    string studentClass;

    void inputDetails() {
        cout << "Enter Student ID: ";
        cin >> sid;
        cin.ignore(); // To clear the newline character from buffer
        cout << "Enter Student Name: ";
        getline(cin, sname);
        cout << "Enter Class: ";
        getline(cin, studentClass);
    }

    void displayDetails() {
        cout << "Student ID: " << sid << endl;
        cout << "Student Name: " << sname << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add New Student\n";
        cout << "2. Display Student Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To clear the input buffer

        switch (choice) {
            case 1: {
                Student newStudent;
                newStudent.inputDetails();
                students.push_back(newStudent);
                cout << "Student added successfully!" << endl;
                break;
            }
            case 2: {
                if (students.empty()) {
                    cout << "No students available!" << endl;
                } else {
                    for (size_t i = 0; i < students.size(); ++i) {
                        cout << "\nStudent " << i + 1 << " Details:\n";
                        students[i].displayDetails();
                        cout << "-------------------------------\n";
                    }
                }
                break;
            }
            case 3:
                cout << "Exiting system..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
