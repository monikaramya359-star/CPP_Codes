#include <iostream>
using namespace std;

class Student
{
public:
    string name;

private:
    int age;

protected:
    string college;

public:
    void setData()
    {
        age = 20;
        college = "Aditya University";
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "College: " << college << endl;
    }
};

int main()
{
    Student s;

    cout << "Enter student name: ";
    cin >> s.name;

    s.setData();
    s.display();

    return 0;
}
