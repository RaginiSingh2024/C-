#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter Numerator & demoerator for division :\n";
    cin>>a>>b;

    try{
        if(b==0)
        {
            throw b;
        }
        else{
            c=a/b;
            cout<<"Division="<<c;
        }
    }
    catch(int ex)
    {
        cout<<"Enter Occured: Can't divide by "<<ex;
    }
}