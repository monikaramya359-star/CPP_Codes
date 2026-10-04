#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
};

class Bird
{
public:
    void fly()
    {
        cout << "Bird can fly" << endl;
    }
};

class Parrot : public Animal, public Bird
{
public:
    void speak()
    {
        cout << "Parrot can speak" << endl;
    }
};

int main()
{
    Parrot p;

    p.eat();
    p.fly();
    p.speak();

    return 0;
}
