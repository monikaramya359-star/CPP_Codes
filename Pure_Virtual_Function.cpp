#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of Rectangle: " << l * b << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}
