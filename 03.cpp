#include <iostream>
#include <string>
using namespace std;

void chkcmnt(string line)
  {
    if (line.length() >= 2 && line[0] == '/' && line[1] == '/')
    {
        cout << "This is a single-line comment." << endl;
    }

    else if (line.length() >= 4 && line[0] == '/' && line[1] == '*' &&
             line[line.length() - 2] == '*' && line[line.length() - 1] == '/')
    {
        cout << "This is a multi-line comment." << endl;
    }

    else
    {
        cout << "This is not a comment." << endl;
    }
  }

int main()
  {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    chkcmnt(input);

    return 0;
  }
