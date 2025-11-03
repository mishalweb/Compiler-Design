#include <iostream>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();

int main()
  {
   int choice;
    char cont;

    do
    {
        cout << "Main Menu:" << endl;
        cout << "1. Numeric Constant or Not" << endl;
        cout << "2. Input is Operators or Not" << endl;
        cout << "3. Input is Comment line(s) or Not" << endl;
        cout << "4. Check Identifier" << endl;
        cout << "5. Average of Array" << endl;
        cout << "6. Minimum and Maximum Array" << endl;
        cout << "7. Concatenated Full Name" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
             case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
                break;
            case 7:
                task7();
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }

        cout << "Press 'c' to continue or any other key to exit." << endl;
        cin >> cont;
    } while (cont == 'c' || cont == 'C');

    cout << "Program Ended.!" << endl;
    return 0;
  }
