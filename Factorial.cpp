#include<iostream>
using namespace std;
int main()
{
    int a,fact=1,i;
    cout<<"Enter a number :";
    cin>>a;
    if(a<0)
    {
        cout<<"Enter natural number.";
    }
    else if(a==0)
    {
        cout<<"factorial of 0 is 1";
    }
    else
    {
        for(i=1;i<=a;i++)
        {
           fact=fact*i;

        }
        cout<<"factorial of "<<a<<" is "<<fact;
    }

    
}
