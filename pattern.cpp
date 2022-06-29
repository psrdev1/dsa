#include <iostream>
using namespace std;
int main()
{

    // ractengal pattern for
    /*
    *****
    *   *
    *   *
    *   *
    *****
    */

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

    // peramid pattern
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

    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////peramid pattern
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // floyd's triangle
    /*  int count = 1;

     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j < i; j++)
         {
             cout << count;
             count++;
         }
         cout << endl;
     } */

    // butterfly pattern
    /*  for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << "*";
         }
         int space = 2 * n - 2 * i;
         for (int j = 1; j <= space; j++)
         {
             cout << " ";
         }
         for (int j = 1; j <= i; j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     for (int i = n; i >= 1; i--)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << "*";
         }
         int space = 2 * n - 2 * i;
         for (int j = 1; j <= space; j++)
         {
             cout << " ";
         }
         for (int j = 1; j <= i; j++)
         {
             cout << "*";
         }
         cout << endl;
     } */

    /*
    12345
    1234
    123
    12
    1
     */
    /* for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    } */

    /*
        1
        01
        101
        0101
        10101
        n=5;
        rows = 1 to n;
        coloum = 1 to row num
        element= if row is even 1 if row is odd 0


     */
    /*  for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             if ((i + j) % 2 == 0)
             {
                 cout << 1;
             }
             else
             {
                 cout << 0;
             }
         }
         cout << endl;
     } */

    /*
    rows= 1 to n;
    coloum= 1 to n;
    element= n- " " then n*

     */
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j <= i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*    for (int i = 1; i <= n; i++)
       {
           for (int j = n; j >= i; j--)
           {
               cout << " ";
           }
           for (int j = 1; j <= n; j++)
           {
               cout << "*";
           }
           cout << endl;
       } */

    /*

    n=5;
    rows =1 to n;
    coloums = 1 to n -rows " "; 1 to row no
     */

    // number peramid
    /*
         1
        1 2
       1 2 3
      1 2 3 4
     1 2 3 4 5
    1 2 3 4 5 6
   1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
     */
    /*   for (int i = 1; i <= n; i++)
      {
          for (int j = 1; j <= n - i; j++)
          {
              cout << " ";
          }
          for (int j = 1; j <= i; j++)
          {
              cout << j << " ";
          }
          cout << endl;
      } */

    // palindromic numbers peramid
    /*
    rows = 1 to n ;
    coloums=
     */

    /*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/
    /* for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    } */

    /*
    rows= 1 to n ;
    coulms= n-row number " " ;  2xrow no -1 "*";
     */
    return 0;
}