#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x % 4 == 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Not Good" << endl;
        }
    }
    return 0;
}
