#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x1, x2, y1, y2;
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        int a = abs(x1 - x2);
        int b = abs(y1 - y2);
        if (a > b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    return 0;
}
