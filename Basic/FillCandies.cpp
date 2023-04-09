#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int n, m, k;
    while (testCases--)
    {
        cin >> n >> k >> m;
        int temp = k * m;
        int f = n / temp;
        if (n % temp == 0)
        {
            cout << f << endl;
        }
        else
        {
            cout << f + 1 << endl;
        }
    }
    return 0;
}
