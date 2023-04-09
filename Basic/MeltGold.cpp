#include <iostream>
using namespace std;

int main()
{
    int testCases;
    int x;
    while (testCases--)
    {
        int i = 1;
        int y = 0;
        int count = 0;
        cin >> x >> y;
        while (x >= y)
        {
            y = y + i;
            i++;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
