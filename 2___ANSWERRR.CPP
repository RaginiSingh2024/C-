// 16. Bank Account class with exception handling for withdrawal.
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

// 17. Library Management System (Add and Display Books)
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

// 18. Build a simple calculator using a switch-case.
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


// 19. Simulate an online purchase with exception handling for invalid debit card number or insufficient balance.

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

// 20. Create a class Max to calculate the greatest among three numbers using the else if ladder.
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

// 21. Program to calculate the gross salary based on basic salary.
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


// 22. Student Grading System
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


// 23. Array of 20 integers and count positive, negative, odd, even, and zeros.

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


// 24. Class Factorial to calculate factorial and throw exceptions for negative/zero input.

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

// 25. Demonstrating different types of inheritance in a University Management System.

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





// 26. Create a simple text file with append and read functionality.

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


// 28. Student Management System with menu-driven approach.

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


// 29. Matrix addition program.
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

// 30. Swapping two numbers using pointers.
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

// 31. Result-sheet Program using student class.



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


// 32. Take a string input from the user and use three string functions.

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
