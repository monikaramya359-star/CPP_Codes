#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    Student s1(name, age);
    Student s2(s1);

    cout << "\nOriginal Student:" << endl;
    s1.display();

    cout << "\nCopied Student:" << endl;
    s2.display();

    return 0;
}
