21. Calculate Gross Salary Based on Basic Salary
#include <iostream>
using namespace std;

int main() {
    double basicSalary, hra, da, grossSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.80;
    }
    else if (basicSalary <= 20000) {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.90;
    }
    else {
        hra = basicSalary * 0.30;
        da = basicSalary * 0.95;
    }

    grossSalary = basicSalary + hra + da;

    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
