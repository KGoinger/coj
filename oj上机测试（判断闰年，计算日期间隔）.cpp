#include<iostream>
using namespace std;
int main()
{
	int year, m1, d1, m2, d2;
	while (cin >> year >> m1 >> d1 >> m2 >> d2)
	{
		int sum = 0;
		int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))month[1] = 29;
		if (m1 == m2)
			cout << d1 - d2 << endl;
		else if (m1 < m2)
		{
			sum = month[m1 - 1] - d1;
			for (int i = m1; i < m2 - 1; i++)
				sum += month[i];
			sum += d2;
			cout << (-sum)<<endl;
		}
		else if (m1 > m2)
		{
			sum = month[m2 - 1] - d2;
			for (int i = m2; i < m1-1 ; i++)
				sum += month[i];
			sum += d1;
			cout << sum<<endl;
		}
	}
}
