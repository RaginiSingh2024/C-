15. Parameterized Constructor in Rectangle Class



#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate the area
    double area() {
        return length * width;
    }
};

int main() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    // Create a Rectangle object using the parameterized constructor
    Rectangle rect(length, width);
    
    // Display the area of the rectangle
    cout << "The area of the rectangle is: " << rect.area() << endl;

    return 0;
}
