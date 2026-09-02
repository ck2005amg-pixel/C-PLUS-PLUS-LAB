#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int i, len=0, flag=1;
    cout << "ENTER A STRING : ";
    cin >> str;
    while(str[len] != '\0')
    {
        len++;
    }
    for (i=0;i<len/2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout << " PALINDROME";
    else
    cout << "NOT PALINDR0ME";
    return 0;
}