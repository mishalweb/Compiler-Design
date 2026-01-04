#include <iostream>
#include <string>
using namespace std;

bool Final(char states)
  {
    return (states == 'B' || states == 'D' || states == 'G' || states == 'H');
  }

char transition (char states, char input)
{
    switch (states)
    {
        case 'A':
            if (input == 'a')
                return 'B';
            else
                return 'C';

        case 'B':
            if (input == 'a')
                return 'D';
            else
                return 'E';

        case 'C':
            if (input == 'a')
                return 'B';
            else
                return 'C';

        case 'D':
            if (input == 'a')
                return 'D';
            else
                return 'E';

        case 'E':
            if (input == 'a')
                return 'F';
            else
                return 'X';

        case 'F':
            if (input == 'a')
                return 'G';
            else
                return 'H';

        case 'G':
            if (input == 'a')
                return 'D';
            else
                return 'E';

        case 'H':
            if (input == 'a')
                return 'D';
            else
                return 'E';

        default:
            return 'X';
    }
}

int main()
   {
    string input;
    char current = 'A';

    cout << "Enter input string (a & b): ";
    cin >> input;

    for (char c : input)
    {
        if (c != 'a' && c != 'b')
        {
            cout << "Invalid input symbol!!!" << endl;
            return 0;
        }
        current = transition(current, c);
    }

    if (Final(current))
    {
        cout << "String ACCEPTED!" << endl;
    }
    else
    {
        cout << "String REJECTED!" << endl;
    }

    return 0;
  }
