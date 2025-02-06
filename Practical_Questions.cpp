Write a C++ program to calculate the sum of all even numbers and the product of
all odd numbers between 1 and n(inclusive).



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int sumEven = 0;
//     int productOdd = 1;
//     bool hasOdd = false;  // To handle the case where no odd numbers are present

//     // Ask the user for the value of n
//     cout << "Enter a positive integer n: ";
//     cin >> n;

//     // Loop through all numbers from 1 to n
//     for (int i = 1; i <= n; ++i) {
//         if (i % 2 == 0) {
//             // If i is even, add it to the sum
//             sumEven += i;
//         } else {
//             // If i is odd, multiply it to the product
//             productOdd *= i;
//             hasOdd = true;  // We have encountered at least one odd number
//         }
//     }

//     // Display the results
//     cout << "Sum of even numbers: " << sumEven << endl;
//     if (hasOdd) {
//         cout << "Product of odd numbers: " << productOdd << endl;
//     } else {
//         cout << "No odd numbers in the range!" << endl;
//     }

//     return 0;
// }


Write a program that defines a class Rectangle with the following:
Two private data members: length and width.
A default constructor that initializes length and width to 1.
A member function area() to calculate and return the area of the rectangle.
A main() function to create an object of the Rectangle class, call the area()
function, and print the result.

// #include <iostream>
// using namespace std;

// // Rectangle class definition
// class Rectangle {
// private:
//     // Private data members: length and width
//     double length;
//     double width;

// public:
//     // Default constructor initializing length and width to 1
//     Rectangle() {
//         length = 1.0;
//         width = 1.0;
//     }

    // Member function to calculate and return the area of the rectangle
//     double area() {
//         return length * width;
//     }

//     // Optionally, you can provide setter functions to modify length and width
//     void setDimensions(double l, double w) {
//         length = l;
//         width = w;
//     }

//     // Getter functions to access the dimensions (optional)
//     double getLength() {
//         return length;
//     }

//     double getWidth() {
//         return width;
//     }
// };

// // Main function
// int main() {
//     // Create an object of the Rectangle class
//     Rectangle rect;

//     // Call the area function and print the result
//     cout << "Area of the rectangle: " << rect.area() << endl;

//     // Set custom dimensions for the rectangle
//     rect.setDimensions(5.0, 3.0);

//     // Call the area function again with new dimensions and print the result
//     cout << "Area of the rectangle with new dimensions: " << rect.area() << endl;

//     return 0;
// }


3. Write a C++ program to define a class Student with the following:
Private data members: name and age.
A parameterized constructor to initialize the name and age.
A copy constructor to create a copy of an existing Student object.
A member function display() to print the details of the student.
In the main() function, create an object of the Student class using the
parameterized constructor and another object using the copy constructor.
Display the details of both students.
// #include <iostream>
// #include <string>
// using namespace std;

// // Student class definition
// class Student {
// private:
//     // Private data members: name and age
//     string name;
//     int age;

// public:
    // Parameterized constructor to initialize name and age
//     Student(string n, int a) {
//         name = n;
//         age = a;
//     }

//     // Copy constructor to create a copy of an existing Student object
//     Student(const Student &other) {
//         name = other.name;
//         age = other.age;
//     }

//     // Member function to display student details
//     void display() {
//         cout << "Student Name: " << name << endl;
//         cout << "Student Age: " << age << endl;
//     }
// };

// // Main function
// int main() {
//     // Create an object of the Student class using the parameterized constructor
//     Student student1("Alice", 20);

//     // Create another object using the copy constructor
//     Student student2 = student1;

//     // Display the details of both students
//     cout << "Details of student 1:" << endl;
//     student1.display();
//     cout << endl;

//     cout << "Details of student 2 (copy of student 1):" << endl;
//     student2.display();

//     return 0;
// }


4. Write a program that defines a function int add(int a, int b) to calculate and return
the sum of two integers.
● Call this function from main() with two user-input values.
● Display the returned result.
// #include <iostream>
// using namespace std;

// Function to calculate the sum of two integers
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int num1, num2;

//     // Ask the user for two integers
//     cout << "Enter the first integer: ";
//     cin >> num1;

//     cout << "Enter the second integer: ";
//     cin >> num2;

//     // Call the add function and store the result
//     int result = add(num1, num2);

//     // Display the result
//     cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

//     return 0;
// }



5. Write a program to demonstrate function overloading by creating three functions
named max:
int max(int a, int b) to find the larger of two integers.
double max(double a, double b) to find the larger of two double values.

// #include <iostream>
// using namespace std;

// // Function to find the larger of two integers
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// // Function to find the larger of two double values
// double max(double a, double b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int int1, int2;
//     double double1, double2;

//     // User input for integers
//     cout << "Enter two integers: ";
//     cin >> int1 >> int2;

//     // User input for doubles
//     cout << "Enter two double values: ";
//     cin >> double1 >> double2;

//     // Call the overloaded max function for integers
//     cout << "Larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;

//     // Call the overloaded max function for doubles
//     cout << "Larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

//     return 0;
// }


6. Write a recursive function int factorial(int n) that calculates the factorial of a given
number n.
In the main() function, prompt the user to enter a positive integer and call the
factorial function to compute and display the result.
Example: For input 5, the output should be 120.
// #include <iostream>
// using namespace std;

// // Recursive function to calculate the factorial of a number
// int factorial(int n) {
//     // Base case: factorial of 0 or 1 is 1
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         // Recursive case: n * factorial of (n-1)
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;

//     // Prompt the user to enter a positive integer
//     cout << "Enter a positive integer: ";
//     cin >> num;

//     // Check for non-negative input
//     if (num < 0) {
//         cout << "Please enter a positive integer!" << endl;
//     } else {
//         // Call the factorial function and display the result
//         int result = factorial(num);
//         cout << "Factorial of " << num << " is: " << result << endl;
//     }

//     return 0;
// }



7. Write a C++ program to input 5 integers from the user into an array and find the
largest number in the array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];  // Array to store 5 integers
//     int largest;

//     // Input 5 integers from the user
//     cout << "Enter 5 integers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     // Initialize largest to the first element of the array
//     largest = arr[0];

//     // Find the largest number in the array
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     // Display the largest number
//     cout << "The largest number in the array is: " << largest << endl;

//     return 0;
// }


8. Program to initialize an array with the first 10 natural numbers and print each element.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10];

//     // Initialize the array with the first 10 natural numbers
//     for (int i = 0; i < 10; i++) {
//         arr[i] = i + 1;
//     }

//     // Print each element in the array
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }


// 9. Program to reverse the elements of an array.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int temp;

//     // Reverse the array
//     for (int i = 0; i < 5 / 2; i++) {
//         temp = arr[i];
//         arr[i] = arr[5 - i - 1];
//         arr[5 - i - 1] = temp;
//     }

//     // Print reversed array
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


10. Program to take 6 integers as input and calculate the sum of all elements in the array.
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[6], sum = 0;

//     // Input 6 integers
//     cout << "Enter 6 integers: ";
//     for (int i = 0; i < 6; i++) {
//         cin >> arr[i];
//     }

//     // Calculate sum of array elements
//     for (int i = 0; i < 6; i++) {
//         sum += arr[i];
//     }

//     cout << "The sum of the elements is: " << sum << endl;

//     return 0;
// }


11. Program to input 8 numbers into an array and count how many are even and how many are odd.
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[8], evenCount = 0, oddCount = 0;

//     // Input 8 integers
//     cout << "Enter 8 numbers: ";
//     for (int i = 0; i < 8; i++) {
//         cin >> arr[i];
//     }

//     // Count even and odd numbers
//     for (int i = 0; i < 8; i++) {
//         if (arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }

//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;

//     return 0;
// }


12. String Operations: Reverse a string, concatenate two strings, and calculate the length of a string.
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1, str2, reversed;

//     // Input two strings
//     cout << "Enter first string: ";
//     cin >> str1;
//     cout << "Enter second string: ";
//     cin >> str2;

//     // Reverse the first string
//     reversed = string(str1.rbegin(), str1.rend());

//     // Concatenate two strings
//     string concatenated = str1 + str2;

//     // Display operations
//     cout << "Reversed string: " << reversed << endl;
//     cout << "Concatenated string: " << concatenated << endl;
//     cout << "Length of first string: " << str1.length() << endl;

//     return 0;
// }


13. Swapping using pointers and pointer arithmetic.
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};

//     // Swapping two elements using pointers
//     int *ptr1 = &arr[0], *ptr2 = &arr[4];

//     // Swap values
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     // Display swapped array
//     cout << "Array after swapping: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

14. Program with Base Class and Virtual Function for Overriding.

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() {
//         cout << "Base class display" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() override {
//         cout << "Derived class display" << endl;
//     }
// };

// int main() {
//     Base* basePtr;
//     Derived derivedObj;

//     // Base class pointer to derived class object
//     basePtr = &derivedObj;

//     // Call the overridden function
//     basePtr->display();

//     return 0;
// }


15. Program to use a parameterized constructor to calculate the area of a rectangle.
// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     double length, width;

// public:
//     // Parameterized constructor
//     Rectangle(double l, double w) {
//         length = l;
//         width = w;
//     }

//     double area() {
//         return length * width;
//     }
// };

// int main() {
//     double length, width;
//     cout << "Enter length and width of rectangle: ";
//     cin >> length >> width;

//     // Create object using parameterized constructor
//     Rectangle rect(length, width);

//     cout << "Area of the rectangle: " << rect.area() << endl;

//     return 0;
// }



16. Bank Account class with exception handling for withdrawal.
// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class BankAccount {
// private:
//     double balance;

// public:
//     BankAccount(double initial_balance) {
//         if (initial_balance < 0)
//             throw invalid_argument("Initial balance cannot be negative.");
//         balance = initial_balance;
//     }

//     void withdraw(double amount) {
//         if (amount > balance)
//             throw runtime_error("Insufficient balance.");
//         balance -= amount;
//     }

//     double getBalance() {
//         return balance;
//     }
// };

// int main() {
//     try {
//         BankAccount account(500);
//         account.withdraw(600); // Exception will be thrown
//         cout << "Balance after withdrawal: " << account.getBalance() << endl;
//     } catch (const exception& e) {
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }

17. Library Management System (Add and Display Books)
// #include <iostream>
// #include <vector>
// using namespace std;

// class Book {
// private:
//     int bookID;
//     string bookName, author;

// public:
//     Book(int id, string name, string authorName)
//         : bookID(id), bookName(name), author(authorName) {}

//     void display() {
//         cout << "Book ID: " << bookID << ", Name: " << bookName << ", Author: " << author << endl;
//     }
// };

// int main() {
//     vector<Book> library;
//     int n;
//     cout << "Enter the number of books: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int id;
//         string name, author;

//         cout << "Enter Book " << i + 1 << " details (ID, Name, Author): ";
//         cin >> id >> name >> author;

//         library.push_back(Book(id, name, author));
//     }

//     cout << "Books in Library: " << endl;
//     for (const auto& book : library) {
//         book.display();
//     }

//     return 0;
// }

18. Build a simple calculator using a switch-case.
// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2, result;
//     char operation;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     cout << "Enter operator (+, -, *, /): ";
//     cin >> operation;

//     switch (operation) {
//         case '+':
//             result = num1 + num2;
//             break;
//         case '-':
//             result = num1 - num2;
//             break;
//         case '*':
//             result = num1 * num2;
//             break;
//         case '/':
//             if (num2 != 0)
//                 result = num1 / num2;
//             else {
//                 cout << "Error: Division by zero is not allowed!" << endl;
//                 return 1;
//             }
//             break;
//         default:
//             cout << "Invalid operator!" << endl;
//             return 1;
//     }

//     cout << "Result: " << result << endl;
//     return 0;
// }


19. Simulate an online purchase with exception handling for invalid debit card number or insufficient balance.

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class PurchaseException : public exception {
// public:
//     const char* what() const noexcept override {
//         return "Purchase failed due to invalid card or insufficient balance.";
//     }
// };

// class DebitCard {
// public:
//     bool validateCardNumber(string cardNumber) {
//         // Simple check for length of card number (for example purposes)
//         return cardNumber.length() == 16;
//     }

//     bool checkBalance(double balance, double amount) {
//         return balance >= amount;
//     }
// };

// int main() {
//     DebitCard card;
//     string cardNumber;
//     double balance = 1000.0, purchaseAmount;

//     cout << "Enter debit card number (16 digits): ";
//     cin >> cardNumber;
    
//     try {
//         if (!card.validateCardNumber(cardNumber)) {
//             throw PurchaseException();
//         }

//         cout << "Enter purchase amount: ";
//         cin >> purchaseAmount;

//         if (!card.checkBalance(balance, purchaseAmount)) {
//             throw PurchaseException();
//         }

//         balance -= purchaseAmount;
//         cout << "Purchase successful! Remaining balance: " << balance << endl;
//     } catch (const PurchaseException& e) {
//         cout << e.what() << endl;
//     }

//     return 0;
// }

20. Create a class Max to calculate the greatest among three numbers using the else if ladder.
// #include <iostream>
// using namespace std;

// class Max {
// public:
//     int findMax(int a, int b, int c) {
//         if (a >= b && a >= c)
//             return a;
//         else if (b >= a && b >= c)
//             return b;
//         else
//             return c;
//     }
// };

// int main() {
//     Max maxObj;
//     int a, b, c;

//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     int largest = maxObj.findMax(a, b, c);
//     cout << "The largest number is: " << largest << endl;

//     return 0;
// }

21. Program to calculate the gross salary based on basic salary.
// #include <iostream>
// using namespace std;

// int main() {
//     double basicSalary, grossSalary, hra, da;

//     cout << "Enter basic salary: ";
//     cin >> basicSalary;

//     if (basicSalary <= 10000) {
//         hra = basicSalary * 0.20;
//         da = basicSalary * 0.80;
//     } else if (basicSalary <= 20000) {
//         hra = basicSalary * 0.25;
//         da = basicSalary * 0.90;
//     } else {
//         hra = basicSalary * 0.30;
//         da = basicSalary * 0.95;
//     }

//     grossSalary = basicSalary + hra + da;

//     cout << "Gross salary: " << grossSalary << endl;

//     return 0;
// }


22. Student Grading System
// #include <iostream>
// using namespace std;

// int main() {
//     double marks;

//     cout << "Enter the marks (0-100): ";
//     cin >> marks;

//     if (marks >= 90)
//         cout << "Grade: A" << endl;
//     else if (marks >= 75)
//         cout << "Grade: B" << endl;
//     else if (marks >= 50)
//         cout << "Grade: C" << endl;
//     else
//         cout << "Grade: F" << endl;

//     return 0;
// }


23. Array of 20 integers and count positive, negative, odd, even, and zeros.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[20];
//     int posCount = 0, negCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;

//     cout << "Enter 20 integers: ";
//     for (int i = 0; i < 20; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 20; i++) {
//         if (arr[i] > 0)
//             posCount++;
//         else if (arr[i] < 0)
//             negCount++;
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//         if (arr[i] == 0)
//             zeroCount++;
//     }

//     cout << "Positive numbers: " << posCount << endl;
//     cout << "Negative numbers: " << negCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;
//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Zeros: " << zeroCount << endl;

//     return 0;
// }


24. Class Factorial to calculate factorial and throw exceptions for negative/zero input.

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class Factorial {
// public:
//     int fact(int n) {
//         if (n <= 0) {
//             throw invalid_argument("Factorial is not defined for zero or negative numbers.");
//         }

//         int result = 1;
//         for (int i = 1; i <= n; i++) {
//             result *= i;
//         }

//         return result;
//     }
// };

// int main() {
//     Factorial factObj;
//     int number;

//     cout << "Enter a number to calculate its factorial: ";
//     cin >> number;

//     try {
//         int result = factObj.fact(number);
//         cout << "Factorial of " << number << " is: " << result << endl;
//     } catch (const invalid_argument& e) {
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }

25. Demonstrating different types of inheritance in a University Management System.

// #include <iostream>
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;

// public:
//     Person(string n, int a) : name(n), age(a) {}

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// class Student : public Person {
// private:
//     int rollNo;
//     string course;

// public:
//     Student(string n, int a, int r, string c) : Person(n, a), rollNo(r), course(c) {}

//     void display() {
//         Person::display();
//         cout << "Roll No: " << rollNo << ", Course: " << course << endl;
//     }
// };

// class Faculty : public Person {
// private:
//     int empId;
//     string department;

// public:
//     Faculty(string n, int a, int e, string d) : Person(n, a), empId(e), department(d) {}

//     void display() {
//         Person::display();
//         cout << "Employee ID: " << empId << ", Department: " << department << endl;
//     }
// };

// int main() {
//     Student student("John", 20, 101, "Computer Science");
//     Faculty faculty("Dr. Smith", 40, 1001, "Mathematics");

//     cout << "Student Info:" << endl;
//     student.display();
//     cout << "\nFaculty Info:" << endl;
//     faculty.display();

//     return 0;
// }





26. Create a simple text file with append and read functionality.

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     ofstream outFile("example.txt", ios::app);  // Open for appending
//     if (!outFile) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     string content;
//     cout << "Enter content to append to the file: ";
//     cin.ignore();
//     getline(cin, content);
//     outFile << content << endl;
//     outFile.close();

//     // Reading from the file
//     ifstream inFile("example.txt");
//     if (!inFile) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     cout << "\nFile Content:" << endl;
//     string line;
//     while (getline(inFile, line)) {
//         cout << line << endl;
//     }

//     inFile.close();

//     return 0;
// }


// 27. Print a pattern of stars.

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


28. Student Management System with menu-driven approach.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Student {
// private:
//     int sid;
//     string name;
//     string className;

// public:
//     void input() {
//         cout << "Enter SID: ";
//         cin >> sid;
//         cout << "Enter Name: ";
//         cin.ignore(); // To consume leftover newline
//         getline(cin, name);
//         cout << "Enter Class: ";
//         getline(cin, className);
//     }

//     void display() {
//         cout << "SID: " << sid << ", Name: " << name << ", Class: " << className << endl;
//     }
// };

// int main() {
//     vector<Student> students;
//     int choice;
//     do {
//         cout << "1. Add Student\n";
//         cout << "2. Display All Students\n";
//         cout << "3. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 Student s;
//                 s.input();
//                 students.push_back(s);
//                 break;
//             }
//             case 2:
//                 for (auto& s : students) {
//                     s.display();
//                 }
//                 break;
//             case 3:
//                 cout << "Exiting..." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice!" << endl;
//         }
//     } while (choice != 3);

//     return 0;
// }


29. Matrix addition program.
// #include <iostream>
// using namespace std;

// int main() {
//     int matrix1[2][2], matrix2[2][2], result[2][2];

//     // Input matrices
//     cout << "Enter elements of matrix 1 (2x2):\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cin >> matrix1[i][j];
//         }
//     }

//     cout << "Enter elements of matrix 2 (2x2):\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cin >> matrix2[i][j];
//         }
//     }

//     // Add matrices
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     cout << "Resultant Matrix:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

30. Swapping two numbers using pointers.
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     // Swapping using pointers
//     int* ptr1 = &a;
//     int* ptr2 = &b;
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     cout << "After swapping: a = " << a << ", b = " << b << endl;
//     return 0;
// }

31. Result-sheet Program using student class.



// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;
//     int sub1, sub2, sub3, total;

// public:
//     void input() {
//         cout << "Enter Roll No: ";
//         cin >> roll;
//         cout << "Enter Name: ";
//         cin.ignore(); // To consume leftover newline
//         getline(cin, name);
//         cout << "Enter marks for subject 1: ";
//         cin >> sub1;
//         cout << "Enter marks for subject 2: ";
//         cin >> sub2;
//         cout << "Enter marks for subject 3: ";
//         cin >> sub3;
//         total = sub1 + sub2 + sub3;
//     }

//     void display() {
//         cout << "=========================================\n";
//         cout << "Roll No. Name    S1  S2  S3  Total\n";
//         cout << "=========================================\n";
//         cout << roll << "    " << name << "   " << sub1 << "  " << sub2 << "  " << sub3 << "  " << total << endl;
//         cout << "=========================================\n";
//     }
// };

// int main() {
//     Student student;
//     student.input();
//     student.display();

//     return 0;
// }


32. Take a string input from the user and use three string functions.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Find the length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Convert string to uppercase
    for (char &c : str) {
        c = toupper(c);
    }
    cout << "Uppercase string: " << str << endl;

    // Find if the string contains a substring
    string substring = "example";
    if (str.find(substring) != string::npos) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}
