#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    float avg = 0.0;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        avg = (a + b) / 2.0;
        if (avg > c)
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
