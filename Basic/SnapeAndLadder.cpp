#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int b, rs, ls;
    while (t--)
    {
        cin >> b >> ls;
        float maxLength = (float)(sqrt((ls * ls) + (b * b)));
        float minLength = (float)(sqrt((ls * ls) - (b * b)));
        cout << minLength << " " << maxLength << endl;
    }
    return 0;
}
