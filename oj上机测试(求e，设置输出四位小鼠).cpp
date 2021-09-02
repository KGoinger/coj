#include<iostream>
#include<iomanip>
using namespace std;



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
