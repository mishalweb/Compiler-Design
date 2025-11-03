#include <iostream>
#include <string>

using namespace std;
void task2()
  {
    string expression;

    cout << "Enter an expression: ";
    cin >> expression;

    char ch;
    int count = 0;
    bool operatorFound = false;

    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||
            expression[i] == '/' || expression[i] == '%' || expression[i] == '=')
        {

            count++;
            cout << "operator" << count << " = " << expression[i] << endl;
            operatorFound = true;
        }
    }

    if (!operatorFound)
    {
        cout << "No arithmetic found" << endl;
    }
  }
