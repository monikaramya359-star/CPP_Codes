#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    void setData(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main()
{
    Student s;

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    s.setData(name, age);
    s.display();

    return 0;
}
