#include <iostream>
using namespace std;

void welcome(string name = "Guest")
{
    cout << "Welcome " << name << endl;
}

int main()
{
    string name;
    cin >> name;

    welcome();
    welcome(name);

    return 0;
}
