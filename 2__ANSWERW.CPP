 Write a program to print multiplication table of any number.        

#include <iostream>
using namespace std;

void printMultiplicationTable(int number, int limit = 10) {
    for (int i = 1; i <= limit; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int number, limit;

    // Taking input from the user
    cout << "Enter the number for multiplication table: ";
    cin >> number;
    
    cout << "Enter the limit (default is 10): ";
    cin >> limit;

    // Print the multiplication table
    printMultiplicationTable(number, limit);

    return 0;
}

#  Write a program to calculate sum of digits of a number.

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    // Loop to extract digits and calculate sum
    while (number != 0) {
        sum += number % 10;  // Add the last digit to sum
        number /= 10;         // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    
    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Handling negative numbers
    if (number < 0) {
        number = -number;  // Convert to positive for sum of digits
    }

    // Calculating and displaying the sum of digits
    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}




#  Write a program to find power of a number using for loop.

 #include <iostream>
using namespace std;

 // Function to calculate power
double power(int base, int exponent) {
    double result = 1;
    
    // Handling negative exponents
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }

    // Loop to calculate power
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

     return result;
}

 int main() {
    int base, exponent;

    // Taking input from the user
    cout << "Enter base: ";
cin >> base;
cout << "Enter exponent: ";
cin >> exponent;
// Calculating and displaying the result
 double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}




// #include <iostream>
// using namespace std;

 int reverseNumber(int number) {
   int reverse = 0;
       // Loop to reverse the digits of the number
    while (number != 0) {
         int digit = number % 10;  // Extract the last digit
       reverse = reverse * 10 + digit;  // Build the reversed number
        number /= 10;  // Remove the last digit
     }

     return reverse;
 }

int main() {
     int number;
    
     // Taking input from the user
    cout << "Enter a number: ";
     cin >> number;

    // Calculating and displaying the reversed number
     int result = reverseNumber(number);
     cout << "The reverse of " << number << " is: " << result << endl;

    return 0;
 }


#include <iostream>
using namespace std;

void invertedTriangle() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    invertedTriangle();
    return 0;
}





#include <iostream>
using namespace std;

void increasingNumbersPattern() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    increasingNumbersPattern();
    return 0;
}


#include <iostream>
using namespace std;

void numberPyramid() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    numberPyramid();
    return 0;
}


#include <iostream>
using namespace std;

void alphabetPyramid() {
    for (int i = 1; i <= 5; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    alphabetPyramid();
    return 0;
}


