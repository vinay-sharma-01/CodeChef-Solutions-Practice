#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int bill;
    int perDisc, flatDisc;
    for (int i = 0; i < t; i++)
    {
        cin >> bill;
        perDisc = (bill / 100) * 10;
        flatDisc = 100;
        if (perDisc > flatDisc)
        {
            cout << perDisc << endl;
        }
        else
        {
            cout << flatDisc << endl;
        }
    }
    return 0;
}
