#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a%2==0 && b%2==0)
    {
        cout<<a<<" is Even number.\n";
        cout<<b<<" is Even number.";
    }
    else if(a%2==0 || b%2==0)
    {
        if(b%2!=0)
        {
            cout<<a<<" is Even number.\n";
            cout<<b<<" is Odd number.";
        }
        else
        {
            cout<<a<<" is Odd number.\n";
            cout<<b<<" is Even number.";
        }
    }
    else
    {
        cout<<a<<" is Odd number.\n";
        cout<<b<<" is Odd number.";

    }
}
