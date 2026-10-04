#include <iostream>
using namespace std;

class Address
{
public:
    string city;

    void getCity()
    {
        cout << "Enter city: ";
        cin >> city;
    }
};

class Student
{
public:
    string name;
    Address address;

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        address.getCity();
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "City: " << address.city << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.display();

    return 0;
}
