// C++ Program to Take String from User and Use String Functions
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Function 1: Convert string to uppercase
    for (char& c : str) {
        c = toupper(c);
    }
    cout << "Uppercase: " << str << endl;

    // Function 2: Find length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Function 3: Find a substring
    size_t found = str.find("C++");
    if (found != string::npos) {
        cout << "'C++' found at position: " << found << endl;
    } else {
        cout << "'C++' not found in the string." << endl;
    }

    return 0;
}
