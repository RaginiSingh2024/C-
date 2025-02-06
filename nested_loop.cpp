#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    for(i=1; i<=5;i++){   //rows
    for(k=4;k>=i;k--)
    {
        cout<<" ";
    }
        for(j=1; j<=i; j++) //coloumn
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}