#include <iostream>
using namespace std;
/* bool sortedArray(int array[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sortedArray(array + 1, n - 1);
    return (array[0] < array[1] && restArray);
} */

/* void dec(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << endl;
    dec(n - 1);
}
void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    inc(n - 1);
    cout << n << endl;
} */
/* void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
} */
void replacePi(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        replacePi(str.substr(2));
    }
    else
    {
        cout << str[0];
        replacePi(str.substr(1));
    }
}
int main()
{
    string str;
    cin >> str;
    replacePi(str);
    // reverse("binod");
    /*  int n;
     cin >> n;
     dec(n);
     inc(n); */
    /* int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sortedArray(array, 8); */

    return 0;
}