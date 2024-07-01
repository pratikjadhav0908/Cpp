#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers a & b: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a;
    cout<<"\nb="<<b;
}
