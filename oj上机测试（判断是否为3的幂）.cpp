#include<iostream>
using namespace std;


int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n == 0)
		{
			cout << "NO" << endl;
			continue;
		}
		while (true)
		{
			if (n == 1)
			{
				cout << "YES" << endl;
				break;
			}
				if (n % 3 == 0)n = n / 3;
				else if (n % 3 != 0)
				{
					cout << "NO" << endl;
					break;
				}
		}
	}
}
