#include <iostream>
using namespace std;


int main() 
{
    int a=1,d=2,n,i;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<a;
    for(i=1;i<=n;i++)
    {
        a=a+d;
        cout<<","<<a;
    }
}
