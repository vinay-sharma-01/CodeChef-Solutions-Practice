#include <iostream>
using namespace std;

int main()
{
    int t;
    int x, y, noOfChocos;
    while (t--)
    {
        cin >> x >> y;
        int noOfChocos = x / y;
        cout << noOfChocos << endl;
    }
    return 0;
}
