#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int marks;
    for (int i = 0; i < t; i++)
    {
        cin >> marks;
        if (marks % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << marks % 3 << endl;
        }
    }
    return 0;
}
