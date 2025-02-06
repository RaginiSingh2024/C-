// Write a C++ program to define a class Student with the following:
// Private data members: name and age.
// A parameterized constructor to initialize the name and age.
// A copy constructor to create a copy of an existing Student object.
// A member function display() to print the details of the student.
// In the main() function, create an object of the Student class using the
// parameterized constructor and another object using the copy constructor.
// Display the details of both students.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor to initialize name and age
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor to create a copy of an existing Student object
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a student object using the parameterized constructor
    Student student1("John Doe", 20);

    // Create another student object using the copy constructor
    Student student2 = student1;  // Copy constructor is invoked here

    // Display the details of both students
    cout << "Student 1 Details:" << endl;
    student1.display();

    cout << "\nStudent 2 Details (Copy of Student 1):" << endl;
    student2.display();

    return 0;
}
