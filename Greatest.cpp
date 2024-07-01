#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" is greatest number.";
    }
    else if(b>c&&b>a)
    {
        cout<<b<<" is greatest number.";
    }
    else 
    {
        cout<<c<<" is greatest number.";
    }
}
