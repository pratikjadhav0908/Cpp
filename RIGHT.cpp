#include<iostream>
using namespace std;
int main()
{
    int a,b,c,e,f,g,h,i;
    cout<<"Enter length of sides of triangle: ";
    cin>>a>>b>>c;
    if(a>=0&&b>=0&&c>=0)
    {
        if(a>=b&&a>=c)
        {
            e=a,f=b,g=c;
        }
        else if(b>=a&&b>=c)
        {
            e=b,f=a,g=c;
        }
        else
        {
            e=c,f=a,g=b;
        }
        h=e*e,i=(f*f)+(g*g);
        if(h==i)
        {
            cout<<"Given triangle is Right angle triangle.";
        }
        else
        {
            cout<<"Given triangle is not Right angle triangle.";
        }
    }
    else
    {
        cout<<"Enter positive length.";

    }




}
