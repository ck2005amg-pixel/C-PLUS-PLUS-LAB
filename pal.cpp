#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem,temp;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    temp = n;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    cout << "PALINDROME";
    else
    cout << "NOT PALINDROME";
    return 0;
}