#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // check if number is prime number
    /* int flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    } */

    /* reverse a number

    example
    1234
    4321
     */
    /* int reverse;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl; */

    /*
    excercise 3
    find the given number is armstrong or not and
    example
    153
    cube of each digit is equal to number itself
    1+125+27 = 153

     */
    int sum = 0;
    int original_n = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == original_n)

    {
        cout << "number is Armstrong";
    }
    else
    {
        cout << "no it is not";
    }
}