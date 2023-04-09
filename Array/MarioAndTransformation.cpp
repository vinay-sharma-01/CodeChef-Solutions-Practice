#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m;
    string size = "Normal";
    while (t--)
    {
        cin >> m;
        int count = 1; // current stage of mario
        for (int i = 0; i < m; i++)
        {
            if (count == 2)
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "Small" << endl;
        }
        else if (count == 1)
        {
            cout << "Normal" << endl;
        }
        else if (count == 2)
        {
            cout << "Huge" << endl;
        }
    }
    return 0;
}
