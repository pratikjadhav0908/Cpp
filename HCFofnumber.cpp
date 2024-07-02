#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a<=0||b<=0)
    {
        cout<<"enter natural number.";
    }
    else
    {
      for(i=a;i>=1;i--)
      {
          if(a%i==0 && b%i==0)
           {
             cout<<i<<" is gfc of "<<a<<" & "<<b;
             break;
           }
      }
    }
        
}
