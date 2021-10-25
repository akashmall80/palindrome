//Check whether a number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int lastdigit;
    int reverse=0;
    int originaln=n;
    while(n>0)
    {
        lastdigit=lastdigit%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }
    if(reverse==originaln)
    {
        cout<<"Palindrome";
    }
    else 
    {
        cout<<"Not palindrome";
    }
    return 0;
}