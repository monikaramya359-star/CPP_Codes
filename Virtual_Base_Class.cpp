#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void getName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Marks : virtual public Student
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Sports : virtual public Student
{
public:
    int score;

    void getScore()
    {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Marks, public Sports
{
public:
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Result r;

    r.getName();
    r.getMarks();
    r.getScore();

    r.display();

    return 0;
}
