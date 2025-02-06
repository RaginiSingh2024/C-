#include<iostream>
#include<iomanip>
using namespace std;
class Student 
{
    public:
        int rollNo;
        string name;
        int sub1;
        int sub2;
        int sub3;
        int total;
        Student(int r, string n, int s1, int s2, int s3) 
        {
            rollNo=r;
            name=n;
            sub1=s1;
            sub2=s2;
            sub3=s3;
            total=s1+s2+s3;
        }
};
int main() 
{
    Student students[5] = {
      Student(1, "A", 70, 80, 90),
      Student(2, "B", 60, 70, 80),
      Student(3, "C", 50, 60, 70),
      Student(4, "D", 40, 50, 60),
      Student(5, "E", 30, 40, 50)
    };

    cout << "Roll No. | Name | S1 | S2 | S3 | Total" << endl;
    cout << "-------------------------------------" << endl;

    for (int i = 0; i < 5; i++) 
        {
            cout << students[i].rollNo << " | " << students[i].name << " | "
            << students[i].sub1 << " | " << students[i].sub2 << " | "
            << students[i].sub3 << " | " << students[i].total << endl;
        }
    return 0;
}