#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Alice";
    m[2] = "Bob";
    m[3] = "Charlie";

    cout << "Map elements:" << endl;

    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}
