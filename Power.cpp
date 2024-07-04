#include<iostream>
using namespace std;
int main()
{
    int a,n,p=1,i;
    cout<<"Enter the number & its power :";
    cin>>a>>n;
    for(i=1;i<=n;i++)
    {
        p=p*a ;
    }
    cout<<p;

}
