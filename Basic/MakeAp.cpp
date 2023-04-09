#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> c;
        if ((a + c) % 2 == 0)
        {
            cout << (a + c) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}