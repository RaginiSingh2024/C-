#include<iostream>
using namespace std;

int main()
{
    int n,i;
    bool flag=true;

    cout<<"Enter the number : ";
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number";
            flag=false;
            break;
        }
    }

if(flag==true)
{
 cout<<"prime number";

}
}

