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

class Marks : virtual public Student
{
public:
    int marks;

    void getMarks()
    {
        cin >> marks;
    }
};

class Sports : virtual public Student
{
public:
    int score;

    void getScore()
    {
        cin >> score;
    }
};

class Result : public Marks, public Sports
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Result r;

    cout << "Enter name: ";
    r.getName();

    cout << "Enter marks: ";
    r.getMarks();

    cout << "Enter sports score: ";
    r.getScore();

    r.display();

    return 0;
}
