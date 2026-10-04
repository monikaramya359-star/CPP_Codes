#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor called" << endl;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }

    void display()
    {
        cout << "Student object is working" << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
