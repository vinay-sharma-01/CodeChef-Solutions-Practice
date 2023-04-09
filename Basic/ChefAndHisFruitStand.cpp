#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        int check = x / 2;
        if (check <= y)
        {
            cout << check << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
