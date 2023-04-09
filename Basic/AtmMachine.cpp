#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    int ar[100];
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int temp = n;
        for (int j = 0; j < temp; j++)
        {
            cin >> ar[j];
            if (k >= ar[j])
            {
                k = k - ar[j];
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}