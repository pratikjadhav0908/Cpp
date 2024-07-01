#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    switch(c)
    { 
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        {
            cout<<"character is vowel.";
            break;
        }
        default:
        {
            cout<<"character is consonant.";
        }
        

    }
}
