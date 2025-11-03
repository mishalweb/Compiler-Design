#include <iostream>
#include <string>
using namespace std;

void task5()
  {
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid Size!" << endl;
        return;
    }


    const int MAX_SIZE = 100;
    if (n > MAX_SIZE)
    {
        cout << "Array size exceeds maximum allowed size of " << MAX_SIZE << endl;
        return;
    }

    double arr[MAX_SIZE], sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = sum / n;
    cout << "Average value for array elements = " << avg << endl;
  }
