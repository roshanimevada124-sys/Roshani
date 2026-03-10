#include<iostream>
using namespace std;

int main()
{
    int num,reverse = 0,remainder,original;
    cout<<"Enter a number:";
    cin>>num;
    original=num;

    while(num!=0)
    {
        remainder = num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(original==reverse)
        cout<<"Palindrome number";
    else
        cout<<"Not Palindrome number";

        return 0;
} 