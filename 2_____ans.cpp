14. Program for Virtual Function Demonstration (Polymorphism)
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void display() {  // Virtual function
        cout << "Display from Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() override {  // Overriding the base class function
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    
    basePtr = &derivedObj;
    basePtr->display();  // Calls Derived class's display method

    return 0;
}
