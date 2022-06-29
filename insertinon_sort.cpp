#include <iostream>
using namespace std;
void insertion_sort(int array[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int current = array[i];
        int prev = i - 1;
        while (prev >= 0 && array[prev] > current)
        {
            array[prev + 1] = array[prev];
            prev = prev - 1;
        }
        array[prev + 1] = current;
    }
}

int main()
{

    int array[] = {50, 78, 33, 212, 10};
    int n = sizeof(array) / sizeof(int);
    insertion_sort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}