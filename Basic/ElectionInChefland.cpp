#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int n, x, i;
    while (testCases--)
    {
        cin >> n >> x;
        int count = 0;
        while (n--)
        {
            cin >> i;
            if (i >= x)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
