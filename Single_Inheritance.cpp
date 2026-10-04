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
    int age;

    void getAge()
    {
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    B obj;

    cout << "Enter name: ";
    obj.getName();

    cout << "Enter age: ";
    obj.getAge();

    obj.display();

    return 0;
}
