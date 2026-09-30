#include <iostream>
#include <cstring>
using namespace std;
class Person
{
public:
    char name[64];
    int age;
    char address[64];
    float salary;
    void input()
    {
        cout << "\nEnter Name: ";
        cin.ignore();
        cin.getline(name, 64);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Address: ";
        cin.getline(address, 64);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    inline int getAge()
    {
        return age;
    }
};
int main()
{
    Person p[10];
    cout << "Enter details of 10 persons:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "\n--- Person " << i + 1 << " ---";
        p[i].input();
    }
    int youngest = 0;
    int eldest = 0;
    for (int i = 1; i < 10; i++)
    {
        if (p[i].getAge() < p[youngest].getAge())
            youngest = i;
        if (p[i].getAge() > p[eldest].getAge())
            eldest = i;
    }
    cout << "\n\n===== YOUNGEST PERSON =====";
    cout << "\nName: " << p[youngest].name;
    cout << "\nAge: " << p[youngest].age;
    cout << "\nAddress: " << p[youngest].address;
    cout << "\nSalary: " << p[youngest].salary;
    cout << "\n\n===== ELDEST PERSON =====";
    cout << "\nName: " << p[eldest].name;
    cout << "\nAge: " << p[eldest].age;
    cout << "\nAddress: " << p[eldest].address;
    cout << "\nSalary: " << p[eldest].salary;
    return 0;
}
