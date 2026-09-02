#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number";
    int n , originals, reverse = 0 , digit;
    cin>>n ;
    originals = n;
    
    while(n > 0);
    {
     digit = n % 10 ;
     reverse = reverse * 10 + digit;
     n = n / 10 ;
    }
    if (reverse == originals)
     cout<<"the number is palindromic number";

    else 
     cout<<"the number is not palindromic";

     return 0;


}
