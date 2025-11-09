#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool isKeyword(string word)
{
    string keywords[] =
    {
        "int", "float", "double", "char", "bool", "void",
        "if", "else", "for", "while", "do", "switch", "case", "default",
        "break", "continue", "return", "class", "public", "private", "protected",
        "static", "const", "struct", "union", "enum", "typedef", "namespace",
        "using", "new", "delete", "try", "catch", "throw", "virtual",
        "inline", "this", "operator", "template", "typename"
    };

    int total = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < total; i++)
    {
        if (word == keywords[i])
            return true;
    }
    return false;
}

bool isIdentifier(string word)
  {
    if (word.empty()) return false;


    if (!isalpha(word[0]) && word[0] != '_')
        return false;

    for (char c : word) {
        if (!isalnum(c) && c != '_')
            return false;
    }
    return true;
  }

string cleanWord(string word)
  {
    string result = "";
    for (char c : word)
    {
        if (isalnum(c) || c == '_')
            result += c;
    }
    return result;
  }

int main()
  {
    ifstream file("sample.txt");
    if (!file.is_open())
    {
        cout << "Error: sample.txt not found!" << endl;
        return 1;
    }

    string word;
    while (file >> word)
    {
        word = cleanWord(word);

        if (word.empty()) continue;

        if (isKeyword(word))
            cout << word << " --> Keyword" << endl;
        else if (isIdentifier(word))
            cout << word << " --> Identifier" << endl;
        else
            cout << word << " --> Not Identifier or Keyword" << endl;
    }

    file.close();
    return 0;
  }
