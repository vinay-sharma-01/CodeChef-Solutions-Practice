#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    double n, x, y, a, b;
    double literConP, literConD, priceP, priceD;
    while (t--)
    {
        cin >> n >> x >> y >> a >> b;
        literConP = n / a;
        literConD = n / b;
        priceP = literConP * x;
        priceD = literConD * y;
        if (priceP < priceD)
        {
            cout << "Petrol" << endl;
        }
        else if (priceP > priceD)
        {
            cout << "Diesel" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}
 