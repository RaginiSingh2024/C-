#include <iostream>

// Function template that accepts an array as a template argument
template <typename T, std::size_t N>
void printArray(T(&arr)[N]) {
    for (std::size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example usage with an array of integers
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr);  // Prints: 1 2 3 4 5

    // Example usage with an array of doubles
    double arr2[] = {1.1, 2.2, 3.3, 4.4};
    printArray(arr2);  // Prints: 1.1 2.2 3.3 4.4

    return 0;
}




#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object using the parameterized constructor
    Student student1("John Doe", 20);

    // Create a copy of student1 using the copy constructor
    Student student2 = student1;

    // Display details of both students
    cout << "Details of student1:" << endl;
    student1.display();
    
    cout << "\nDetails of student2 (copy of student1):" << endl;
    student2.display();

    return 0;
}


// // #include<iostream>
// // using namespace std;

// // //template to display ARRAY

// // #include <iostream>
// // using namespace std;
// // template<class T>
// // void printArray(T arr[], int size) {
// //     for (int i=0; i<size; i++){
// //         cout << arr[i] <<"";

// //     }
// //     cout << endl;
// // }
// // int main(){
// //     int arr[]={1,2,3,4};
// //     printArray(arr,4); //output:1234
// //     return 0;
// // }


// #include <iostream>
// // using namespace std;

// // int main() {
// //     // Dynamically allocate memory for an array of 5 integers
// //     int *arr = new int[5];

// //     // Assign values to the array
// //     for (int i = 0; i < 5; i++) {
// //         arr[i] = i * 10;  // Just as an example: 0, 10, 20, 30, 40
// //     }

// //     // Display the contents of the array
// //     cout << "Array contents:" << endl;
// //     for (int i = 0; i < 5; i++) {
// //         cout << "arr[" << i << "] = " << arr[i] << endl;
// //     }

// //     // Deallocate memory
// //     delete[] arr;

// //     return 0;
// // }




// #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
    
// //     // Input the value of n
// //     cout << "Enter the value of n: ";
// //     cin >> n;
    
// //     int sumEven = 0;
// //     int productOdd = 1;
// //     bool oddProductExists = false;  // To handle the case where no odd numbers are present
    
// //     // Loop through all numbers from 1 to n
// //     for (int i = 1; i <= n; ++i) {
// //         if (i % 2 == 0) {
// //             // If the number is even, add to sumEven
// //             sumEven += i;
// //         } else {
// //             // If the number is odd, multiply to productOdd
// //             productOdd *= i;
// //             oddProductExists = true;
// //         }
// //     }
    
// //     // If no odd numbers were found, set productOdd to 0
// //     if (!oddProductExists) {
// //         productOdd = 0;
// //     }

// //     // Output the results
// //     cout << "Sum of all even numbers between 1 and " << n << " is: " << sumEven << endl;
// //     cout << "Product of all odd numbers between 1 and " << n << " is: " << productOdd << endl;
    
// //     return 0;
// // }




