#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 for integer exception or 2 for character exception: ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 'A';
        else
            throw 10.5;
    }
    catch (int)
    {
        cout << "Integer exception" << endl;
    }
    catch (char)
    {
        cout << "Character exception" << endl;
    }
    catch (double)
    {
        cout << "Double exception" << endl;
    }

    return 0;
}
