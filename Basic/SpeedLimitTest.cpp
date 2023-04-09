#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, x, b, y;
    while (t--)
    {
        cin >> a >> x >> b >> y;
        float alice = float(a) / x;
        float bob = float(b) / y;
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (alice == bob)
        {
            cout << "Equal" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
