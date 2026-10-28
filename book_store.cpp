#include <iostream>
#include <cstring>
using namespace std;

class media
{
protected:
    char title[50];
    char publication[50];

public:
    virtual void read()
    {
        cout << "Enter title: ";
        cin.getline(title, 50);

        cout << "Enter publication: ";
        cin.getline(publication, 50);
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }

    virtual ~media() {}
};

class book : public media
{
    int pages;

public:
    void read() override
    {
        media::read();

        cout << "Enter number of pages: ";
        cin >> pages;
        cin.ignore(1000, '\n');
    }

    void show() override
    {
        media::show();
        cout << "Number of pages: " << pages << endl;
    }
};

class tape : public media
{
    float time;

public:
    void read() override
    {
        media::read();

        cout << "Enter playing time (in minutes): ";
        cin >> time;
        cin.ignore(1000, '\n');
    }

    void show() override
    {
        media::show();
        cout << "Playing time: " << time << " minutes" << endl;
    }
};

int main()
{
    media *ptr;
    book b;
    tape t;

    cout << "Enter book details:\n";
    ptr = &b;
    ptr->read();

    cout << "\nEnter tape details:\n";
    ptr = &t;
    ptr->read();

    cout << "\nBook details:\n";
    ptr = &b;
    ptr->show();

    cout << "\nTape details:\n";
    ptr = &t;
    ptr->show();

    return 0;
}
