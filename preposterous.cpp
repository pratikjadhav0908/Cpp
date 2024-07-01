#include <iostream>
using namespace std;


int main() 
{
    int a=5,b;
    cout<<"value of a;"<<a;
    //post increment 
    b=a++;
    cout<<"\nvalue of a after post increment "<<b;
    cout<<"\nvalue of a:"<<a;
    //pre increment 
    b=++a;
    cout<<"\nvalue of a after pre increment:"<<b;
    cout<<"\nvalue of a:"<<a;
    //pre decrement 
    b=--a;
    cout<<"\nvalue of a after pre decrement:"<<b;
    cout<<"\nvalue of a:"<<a;
    //post decrement 
    b=a--;
    cout<<"\nvalue of a after post decrement:"<<b;
    
}
