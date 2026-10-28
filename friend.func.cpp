#include <iostream>
using namespace std;
class B;
class A {
    int x;
public:
    void getdata() {
        cout << "Enter first number: ";
        cin >> x;
    }
    friend void swap(A &, B &);
};
class B {
    int y;
public:
    void getdata() {
        cout << "Enter second number: ";
        cin >> y;
    }
    friend void swap(A &, B &);
};
void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << "\nAfter swapping:";
    cout << "\nFirst number: " << a.x;
    cout << "\nSecond number: " << b.y;
}
int main() {
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    swap(obj1, obj2);
    return 0;
}
