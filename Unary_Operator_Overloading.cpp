#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void operator-()
    {
        value = -value;
    }

    void display()
    {
        cout << "Result: " << value << endl;
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Number obj(n);

    -obj;

    obj.display();

    return 0;
}
