#include<iostream>
using namespace std;
int main()
{
    int a,b,L,i;
    cout<<"Enter Two numbers:";
    cin>>a>>b;
    
    if(a>0&&b>0)
    {
        for(i=a;i>=0;i--)
        {
             if(a%i==0&&b%i==0)
            {
                L=(a*b)/i;
            
                break;
            }
            else
            {
                L=a*b;
           

            }
        }
    
        cout<<"LCM of two numbers :"<<L;
    }
    else
    {
        cout<<"Enter natural number only.";

    }
}
