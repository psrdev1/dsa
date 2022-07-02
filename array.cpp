#include <iostream>
#include <climits>
using namespace std;

// selection sort
/* void selectionSort(int arr[], int n)
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
} */

// bubble sort
/* void bubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}
 */

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; n++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j = 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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

    int arr[6] = {1, 2, 4, 7, 12, 14};
    int arraySize = sizeof(arr) / sizeof(int);
    insertionSort(arr, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}