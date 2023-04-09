#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int rev = 0, digit;
    while (t--)
    {
        cin >> n;
        int temp = n;
        while (n != 0)
        {
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        if (temp == rev)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
        rev = 0;
        digit = 0;
    }
    return 0;
}
