#include <iostream>
#include <climits>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    /*  int n;
     cin >> n;
     int arr[n];
     int maxNum = 0;
     int minNum = INT_MAX;

     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }

     for (int i = 0; i < n; i++)
     {
         if (maxNum < arr[i])
         {
             maxNum = arr[i];
         }
         if (minNum > arr[i])
         {
             minNum = arr[i];
         }
     }
     cout << maxNum << " " << minNum << endl; */

    // selection sort
    int arr[6] = {1, 2, 4, 7, 12, 14};
    int arraySize = sizeof(arr) / sizeof(int);
    selectionSort(arr, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}