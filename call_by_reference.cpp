//call by reference
#include<iostream>
using namespace std;
void swap(int *a, int *b) //declaring two integers in swap function
{
	int temp= *a;
	*a= *b;
	*b = temp;
}
int main()
{
	int x= 5; // initializing x=5
	int y= 10; // initializing y=10 
	cout<<"BEFORE SWAPPING : x= "<<x<<",y= "<<y<<endl;
	swap(&x,&y);
	cout<<"AFTER SWAPPING : x= "<<x<<",y= "<<y<<endl;
	return 0;
}
