#include<iostream>
using namespace std;
int main()
{
    
    float t,a;
    int temperature;
    cout<<"To convert temperature enter 1) from farenheit to celsius\n2)from celsius to fahrenheit\n3)from celsius to kelvin\n4)kelvin to celsius\nEnter : ";
    cin>>temperature;
    cout<<"Enter temperature: ";
    cin>>t;
    switch(temperature)
    {
        case 1:
        {
            a=5*(t-32)/9;
            cout<<"temperature in celsius: "<<a;
            break;
             
        }
        case 2:
        {
            a=(9*t/5)+32;
            cout<<"temperature in fahrenheit: "<<a;
            break;
        }
        case 3:
        {
            a=t+273.15;
            cout<<"temperature in kelvin: "<<a;
            break;
        }
        case 4:
        {
            a=t-273.15;
            cout<<"temperature in celsius: "<<a;
            break;
        }
        default:
        {

            cout<<"enter correct choice.";
        }
    }



}
