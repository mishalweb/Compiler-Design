#include <iostream>
#include <string>

using namespace std;

bool isNum()
  {
    string c;
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] > 47 && c[i] <= 57)
        {
            continue;
        }
    else
        {
            return false;
        }
    }
    return true;
  }


void task1()
  {
    cout<<"Enter value:";
    if (isNum())
    {
        cout << "Numeric constant."<<endl;
    }
    else
    {
        cout << "Not numeric."<<endl;
    }
  }
