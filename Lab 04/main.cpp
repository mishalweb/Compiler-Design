#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;


string keywords[] =
  {
    "int", "float", "double", "char", "bool",
    "main", "return", "if", "else", "for", "while",
    "cout", "cin"
  };

string operators_list[] =
  {
    "+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">=", "<<", ">>"
  };

string punctuation_list[] =
  {
    "(", ")", "{", "}", ";", ",", "\""
  };


bool isKeyword(string s)
  {
    for (string k : keywords)
        if (s == k) return true;
    return false;
  }

bool isOperator(string s)
  {
    for (string op : operators_list)
        if (s == op) return true;
    return false;
  }

bool isPunctuation(string s)
  {
    for (string p : punctuation_list)
        if (s == p) return true;
    return false;
  }


void printToken(string tok)
  {
    if (tok == "") return;

    if (tok == "\"")
        cout << tok << " -> Punctuation\n";
    else if (isKeyword(tok))
        cout << tok << " -> Keyword\n";
    else if (isOperator(tok))
        cout << tok << " -> Operator\n";
    else if (isPunctuation(tok))
        cout << tok << " -> Punctuation\n";
    else if (isdigit(tok[0]))
        cout << tok << " -> Number\n";
    else
        cout << tok << " -> Constant\n";
  }


void processLine(string line)
  {
    string token = "";
    int n = line.size();
    bool insideString = false;

    for (int i = 0; i < n; i++)
    {
        char c = line[i];


        if (c == '"')
        {
            if (insideString)
            {

                printToken(token);
                token = "";
                string quote = "\"";
                printToken(quote);
                insideString = false;
            }
            else
            {

                string quote = "\"";
                printToken(quote);
                insideString = true;
            }
            continue;
        }

        if (insideString)
        {
            token += c;
            continue;
        }


        if (isalnum(c) || c == '_')
        {
            token += c;
        }
        else
        {
            printToken(token);
            token = "";


            if ((c == '<' || c == '>') && i + 1 < n && line[i + 1] == c)
            {
                string op = "";
                op += c;
                op += c;
                printToken(op);
                i++;
            }
            else if (!isspace(c))
            {
                string single = "";
                single += c;
                printToken(single);
            }
        }
    }

    printToken(token);
}


int main()
  {
    ifstream file("sample.txt");
    string line;

    if (!file.is_open())
    {
        cout << "Error opening sample.txt\n";
        return 0;
    }

    while (getline(file, line))
    {
        processLine(line);
    }

    return 0;
  }

