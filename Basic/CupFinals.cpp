#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, d, diff;
    while (t--)
    {
        cin >> x >> y >> d;
        int diff = abs(x - y);
        if (diff <= d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
