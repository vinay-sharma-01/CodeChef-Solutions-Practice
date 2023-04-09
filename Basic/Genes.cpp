#include <iostream>
using namespace std;

int main()
{
    char colorP1, colorP2;
    cin >> colorP1 >> colorP2;
    if ((colorP1 == 'R' || colorP2 == 'R'))
    {
        cout << "R" << endl;
    }
    else if (colorP1 == 'B' || colorP2 == 'B')
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "G" << endl;
    }
    return 0;
}
