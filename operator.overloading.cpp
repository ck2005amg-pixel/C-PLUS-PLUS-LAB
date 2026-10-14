#include <iostream>
using namespace std;

class Complex
{
    int real, imag; 
    public:
        void input()
        {
            cout << "Enter real and imaginary parts: ";
            cin >> real >> imag;
        }
		void display()
        {
            cout << real;
            if (imag >= 0)
            cout << " + " << imag << "i" << endl;
            else
            cout << " - " << -imag << "i" << endl;
    }
    void operator++()
    {
        ++real;
        ++imag;
    }
    void operator--()
    {
        --real;
        --imag;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    ++c1;
    cout << "After incrementing first complex number: ";
    c1.display();

    --c2;
    cout << "After decrementing second complex number: ";
    c2.display();

    return 0;
}
