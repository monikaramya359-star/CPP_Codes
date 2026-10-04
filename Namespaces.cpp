#include <iostream>
using namespace std;

namespace First
{
    void display()
    {
        cout << "This is First Namespace" << endl;
    }
}

namespace Second
{
    void display()
    {
        cout << "This is Second Namespace" << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    return 0;
}
