// #include<iostream>
// using namespace std;
// //factorial using recurion

// int main()
// {
//     int n,f=1;
//     int fact(int x);
     

//      cout<<"Enter the number";
//      cin>>n;


//      f=fact(n);

//      cout<<"Factorial of "<<n<<"="<<f;



// }
//  int fact(int x)
//  {
//     int  f=1;

//     if (x==1)
//     {
//         return 1;
//     }
//     else{
//         return x* fact(x-1);

//     }
//  }

// #include <iostream>
// using namespace std;

// // Function to print Fibonacci series up to n terms
// void printFibonacci(int n) {
//     int first = 0, second = 1, next;

//     // Print first two numbers
//     cout << "Fibonacci Series up to " << n << " terms: \n";
//     for (int i = 0; i < n; i++) {
//         if (i <= 1) {
//             cout << i << " ";  // Print 0 and 1 for the first two terms
//         } else {
//             next = first + second;
//             cout << next << " ";  // Print next Fibonacci number
//             first = second;
//             second = next;
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;

//     // Ask the user for the number of terms in the series
//     cout << "Enter the number of terms for Fibonacci series: ";
//     cin >> n;

//     // Print Fibonacci series
//     printFibonacci(n);

//     return 0;
// }





#include <iostream>
using namespace std;

// Function to reverse a number using recursion
int reverseNumber(int num, int reversed = 0) {
    // Base case: when num becomes 0
    if (num == 0) {
        return reversed;
    }

    // Recursive case: extract the last digit and add it to the reversed number
    int lastDigit = num % 10;
    return reverseNumber(num / 10, reversed * 10 + lastDigit);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the recursive function
    int reversedNumber = reverseNumber(number);
    
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}


#include<iostream>
using names