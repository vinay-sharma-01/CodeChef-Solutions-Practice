// Not correct

#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int n, x, val;
    for (int i = 0; i < testCases; i++)
    {
        cin >> n >> x;
        if (n < x)
        {
            cout << 0 << endl;
        }
        else
        {
            val = (n - x) / 4;
            cout << val << endl;
        }
    } 

    return 0;
}
