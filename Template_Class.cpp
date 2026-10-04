#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }
};

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator<int> c(a, b);

    cout << "Sum = " << c.add() << endl;

    return 0;
}
