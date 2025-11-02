#include <iostream>
using namespace std;

bool isNum()
{
    string c;
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] >= 48 && c[i] <= 57)
        {
            continue;
        }
        else
        {
            cout << "Not numeric";
            return false;
        }
    }

    cout << "Numeric constant";
    return true;
}

int main()
{
    isNum();
    return 0;
}
