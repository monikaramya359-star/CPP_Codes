#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student()
    {
        name = "Guest";
        age = 18;
    }

    Student(string n)
    {
        name = n;
        age = 18;
    }

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
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

    Student s1;
    Student s2(name);
    Student s3(name, age);

    cout << "\nDefault Constructor:" << endl;
    s1.display();

    cout << "One Argument Constructor:" << endl;
    s2.display();

    cout << "Two Argument Constructor:" << endl;
    s3.display();

    return 0;
}
