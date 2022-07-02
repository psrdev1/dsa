#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /* int mx = -1999999;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    } */

    // sum of all subarrays
    /*
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                current += arr[j];
                cout << current << endl;
            }
        } */

    // longest arthmatic subarrays

    /*   int ans = 2;
      int pd = arr[1] - arr[0];
      int j = 2;
      int curr = 2;
      while (j < n)
      {
          if (pd == arr[j] - arr[j - 1])
          {
              curr++;
          }
          else
          {
              pd = arr[j] - arr[j - 1];
              curr = 2;
          }
          ans = max(ans, curr);

          j++;
      }
      cout << ans << endl; */
    int maxSum = INT_MIN;
    int currentSum = 0;

    /*   for (int i = 0; i < n; i++)
      {
          for (int j = i; j < n; j++)
          {
              int sum = 0;
              for (int k = i; k <= j; k++)
              {
                  sum += arr[k];
              }

              maxSum = max(maxSum, sum);
          }
      } */
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
}