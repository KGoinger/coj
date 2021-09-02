#include<iostream>
#include<iomanip>
using namespace std;

long double func(int n)
{
	if (n == 0)return 1;
	if (n == 1)return 1;
	return 1/(n * func(n - 1));
}


int main()
{
	int i;
	while (cin >> i)
	{
		long double sum = 1;
		long double x=1;
		for (int j = 1; j <= i ; j++)
		{
			x = x / j;
			sum += x;
		}
		cout << fixed<<setprecision(4)<<sum << endl;
	}

}
