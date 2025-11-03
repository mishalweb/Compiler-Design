#include <iostream>
#include <string>
using namespace std;
void task6()
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

    int arr[MAX_SIZE];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Minimum value = " << minVal << endl;
    cout << "Maximum value = " << maxVal << endl;
  }

