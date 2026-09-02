// Call by Value and Call by Reference in C++
#include <iostream>
using namespace std;
void swapValue(int a, int b) // Call by Value
{
    int temp = a;
    a = b;
    b = temp;

}
void swapReference(int *a, int *b) // Call by Reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 5;
    int y = 10;
	cout << "Original values: x = " << x << ", y = " << y << endl;
    swapValue(x, y);// Call by Value
    cout << "After Call by Value: x = " << x << ", y = " << y << endl;
    swapReference(&x, &y);// Call by Reference
    cout << "After Call by Reference: x = " << x << ", y = " << y << endl;
    return 0;
}
