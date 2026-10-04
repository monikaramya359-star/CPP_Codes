#include <iostream>
using namespace std;

template <class T, class U>
class Student
{
    T marks;
    U grade;

public:
    Student(T m, U g)
    {
        marks = m;
        grade = g;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    int marks;
    char grade;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter grade: ";
    cin >> grade;

    Student<int, char> s(marks, grade);

    s.display();

    return 0;
}
