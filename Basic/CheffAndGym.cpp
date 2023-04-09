#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int x, y, z;
    for (int i = 0; i < testCases; i++)
    {
        cin >> x >> y >> z;
        if (z >= x)
        {
            if ((z - x) >= y)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
