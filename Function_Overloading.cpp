#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter two decimal numbers: ";
    cin >> x >> y;

    cout << "Integer addition: " << add(a, b) << endl;
    cout << "Decimal addition: " << add(x, y) << endl;

    return 0;
}
