#include <iostream>
using namespace std;
// Base Class
class Student
{
protected:
    int rollNo;
    string name;
public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
};
// Derived Class 1
class Exam : public Student
{
protected:
    int marks[6];
public:
    void getMarks()
    {
        cout << "Enter marks of 6 subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};
// Derived Class 2
class Result : public Exam
{
private:
    int total;
    float percentage;
public:
    void calculate()
    {
        total = 0;
        for (int i = 0; i < 6; i++)
        {
            total = total + marks[i];
        }
        percentage = total / 6.0;
    }
    void display()
    {
        cout << "\n----- RESULT -----\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << "/600" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.calculate();
    r.display();
    return 0;
}
