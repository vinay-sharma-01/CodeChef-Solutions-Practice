#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if ((c >= a) && (d >= b))
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
