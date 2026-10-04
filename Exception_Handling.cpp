#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;

        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Cannot divide by zero" << endl;
    }

    return 0;
}
