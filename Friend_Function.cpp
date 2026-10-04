#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s;

    s.getMarks();
    display(s);

    return 0;
}
