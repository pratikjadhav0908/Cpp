#include<iostream>
using namespace std;
int main()
{
 int a,i,j,n;
 cout<<"Enter number:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
 for(j=n-i;j>=1;j--)
 {
 cout<<" ";
 }
 for(a=1;a<=i;a++) /* diomond*/
 {
 cout<<"* ";
 }
 cout<<"\n";
 }
 
 for(i=n;i>=1;i--)
 {
 
 for(j=(n+1)-i;j>=1;j--)
 {
 cout<<" ";
 
 }
 for(a=1;a<=(i-1);a++)
 {
 cout<<"* ";
 }
 cout<<"\n";
 }
}
