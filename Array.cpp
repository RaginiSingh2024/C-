#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int i,total=0;
    cout<<"Enter the marks of 5 swojrats";
    for(i=0; i<5; i++)
    {
        cin>>marks[i];
        total=total+marks[i];
    }
    cout<<"Total Marks="<<total;

    cout<<"\n\n==============================\n";
    cout<<"\t Result \n";
    cout<<"==================================\n";

    for(i=0; i<5; i++)
    {
        cout<<marks[i]<<"\t";
    }
    cout<<"\n-----------------------------------\n";
    cout<<"Total marks =\t\t"<<total;
    cout<<"======================================\n";
    
}
