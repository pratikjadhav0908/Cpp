#include<iostream>
using namespace std;
int main()
{
    int i;
    float a,c,d;
    cout<<"if input is in kilometer per hour enter 1)\n miles per hour 2)\n meter per second 3)\nEnter choice:";
    cin>>i;
    cout<<"Enter a speed:";
    cin>>a;
    if(a<0)
    {
        cout<<"speed are not less than zero.";
    }
    else
    {
        if(i==1)
        {
            c=5*(a/18);
            d=a/1.609 ;
            cout<<"speed in m/s:"<<c;
            cout<<"\nspeed in miles per hour:"<<d;
        }
        else if(i==2)
        {
            c=1.609*a;
            d=5*(c/18);
            cout<<"speed in km/h:"<<c;
            cout<<"\nspeed in m/s:"<<d;
        }
        else if(i==3)
        {
            c=18*(a/5);
            d=c/1.609;
            cout<<"speed in km/h:"<<c;
            cout<<"\nspeed in miles/h:"<<d;
        }
        else
        {
            cout<<"\nEnter correct choice.";

        }
          

    }
