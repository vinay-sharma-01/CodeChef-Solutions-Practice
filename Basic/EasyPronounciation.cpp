#include <iostream>
using namespace std;

int main()
{
    int size;
    char st[100];
    int t;
    int count = 0;
    while (t--)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> st[i];
        }
        for (int j = 0; j < size; j++)
        {
            for (int i = 'a'; i < 'z'; i++)
            {
                char t = 'a' || 'e' || 'i' || 'o' || 'u';
                if (st[j] == t)
                {
                    continue;
                }
                else
                {
                    count++;
                }
            }
        }
        if (count < 4)
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
