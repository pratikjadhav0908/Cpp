#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter a number:";
    cin>>a;
    if(a<=0)
    {
        cout<<"enter a natural number.";
    }
    else if(a==1)
    {
        cout<<"1 is neighther prime nor composite number.";
    }
    else if(a==2)
    {
        cout<<"2 is prime number.";
    }
    else
    {

    
        for(i=2;i<=a-1;i++)
        {
            if(a%i==0)
            {
               cout<<a<<" is not prime number.";
               break;
            }
            cout<<a<<" is prime number.";

        }
    }    
}
