#include <iostream>
using namespace std;
int main()
{
    // int row, col;
    // cin >> row >> col;
    // for (int i = 0; i <= row; i++)
    // {
    //     for (int j = 0; j <= col; j++)
    //     {
    //         if (i == 0 || i == row)
    //         {
    //             cout << "*";
    //         }
    //         else if (j == 0 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //             }
    //     cout << endl;
    // }

    int n;
    cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - 1; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }

    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << i
        }
    }

    return 0;
}