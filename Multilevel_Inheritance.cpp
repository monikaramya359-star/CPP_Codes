#include <iostream>
using namespace std;

class A
{
public:
    string name;

    void getName()
    {
        cin >> name;
    }
};

class B : public A
{
public:
    int marks;

    void getMarks()
    {
        cin >> marks;
    }
};

class C : public B
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    C obj;

    cout << "Enter name: ";
    obj.getName();

    cout << "Enter marks: ";
    obj.getMarks();

    obj.display();

    return 0;
}
