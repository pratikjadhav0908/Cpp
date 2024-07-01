#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=c+(i*i*i);
    }
    cout<<"Sum of cumbes of first "<<n<<" natural number is "<<c;
}
