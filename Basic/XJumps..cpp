#include <iostream>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;
	int x, y;
	while (testCases--)
	{
		cin >> x >> y;
		int temp = x / y;
		if (x % y == 0)
		{
			cout << temp << endl;
		}
		else
		{
			cout << temp + (x % y) << endl;
		}
	}
	return 0;
}
