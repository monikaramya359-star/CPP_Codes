#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void getName()
    {
        cin >> name;
    }
};

class Marks : public Student
{
public:
    int marks;

    void getMarks()
    {
        cin >> marks;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Grade : public Student
{
public:
    char grade;

    void getGrade()
    {
        cin >> grade;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Marks m;
    Grade g;

    cout << "Enter name and marks: ";
    m.getName();
    m.getMarks();

    cout << "Enter name and grade: ";
    g.getName();
    g.getGrade();

    m.display();
    g.display();

    return 0;
}
