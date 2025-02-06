25. Demonstrating Different Types of Inheritance for University Management System
#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNo;
    string course;

public:
    Student(string n, int a, int r, string c) : Person(n, a), rollNo(r), course(c) {}

    void display() {
        Person::display();
        cout << "Roll No: " << rollNo << ", Course: " << course << endl;
    }
};

// Derived class Faculty
class Faculty : public Person {
private:
    int employeeID;
    string department;

public:
    Faculty(string n, int a, int e, string d) : Person(n, a), employeeID(e), department(d) {}

    void display() {
        Person::display();
        cout << "Employee ID: " << employeeID << ", Department: " << department << endl;
    }
};

int main() {
    Student s("John Doe", 20, 101, "Computer Science");
    Faculty f("Dr. Smith", 40, 1001, "Mathematics");

    cout << "\nStudent Info:\n";
    s.display();

    cout << "\nFaculty Info:\n";
    f.display();

    return 0;
}
