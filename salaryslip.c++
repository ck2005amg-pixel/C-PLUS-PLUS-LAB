#include <iostream>
#include <iomanip>
using namespace std;
class Person
{
    char name[64];
    int age;
    char address[64];
    float basic, HRA, DA, TA, gross;
public:
    Person(const char n[], int a, const char addr[], float b)
    {
        int i;
        for (i = 0; n[i] != '\0'; i++)
            name[i] = n[i];
        name[i] = '\0';
        age = a;
        for (i = 0; addr[i] != '\0'; i++)
            address[i] = addr[i];
        address[i] = '\0';
        basic = b;
        HRA = basic * 0.20;
        DA = basic * 0.10;
        TA = basic * 0.05;
        gross = basic + HRA + DA + TA;
    }
    void display()
    {
        cout << fixed << setprecision(2);
        cout << "\n========== SALARY SLIP ==========";
        cout << "\nName          : " << name;
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;
        cout << "\n-------------------------------";
        cout << "\nBasic Salary  : Rs. " << basic;
        cout << "\nHRA           : Rs. " << HRA;
        cout << "\nDA            : Rs. " << DA;
        cout << "\nTA            : Rs. " << TA;
        cout << "\n-------------------------------";
        cout << "\nGross Salary  : Rs. " << gross;
        cout << "\n===============================";
    }
};
int main()
{
    Person p("Chitranshu Kansari", 21, "Kolkata", 50000);
    p.display();
    return 0;
}
