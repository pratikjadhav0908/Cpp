#include<iostream>
using namespace std;
char abc(string strg)
{
    int i,k,l,a,b,c;
    k=strg.length();
    for(i=0;i<=k;i++)
    {
        if(strg[i]==' ')
        {
           l=i;
        }
    }
    for(a=l;a<=k;a++)
    {
        cout<<strg[a];
    }
    cout<<" ";
    for(b=0;b<=l;b++)
    {
        cout<<strg[b];
    }
}
int main()
{
    abc("pratik jadhav");
}
