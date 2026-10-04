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

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }

    void display()
    {
        cout << "Result: " << value << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number n1(a);
    Number n2(b);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}
