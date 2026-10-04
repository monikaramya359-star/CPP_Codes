#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void display();
};

void Student::display()
{
    cout << "Name: " << name << endl;
}

int main()
{
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    s.display();

    return 0;
}
