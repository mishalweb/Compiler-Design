#include <iostream>
#include <string>

using namespace std;

void task4()
  {
    string input;
    string keys[] = {"main", "void", "return", "else", "if", "static", "int", "char"};

    cout << "\nEnter an input to check if it is a valid identifier: ";
    cin >> input;

    if (input.empty())
    {
        cout << "Invalid identifier (Empty String)" << endl;
        return;
    }
    for (string k : keys)
    {
        if (input == k)
        {
            cout << "Invalid identifier (Reserved Keyword)" << endl;
            return;
        }
    }


    char f = input[0];
    if (!((f >= 'A' && f <= 'Z') || (f >= 'a' && f <= 'z') || f == '_'))
    {
        cout << "Invalid identifier (First character is invalid)" << endl;
        return;
    }


    for (size_t i = 1; i < input.size(); i++)
    {
        char ch = input[i];
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || ch == '_'))
        {
            cout << "Invalid identifier (Invalid character at position " << i + 1 << ")" << endl;
            return;
        }
    }

    cout << "Valid identifier" << endl;
}
