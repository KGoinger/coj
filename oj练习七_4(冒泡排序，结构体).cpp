#include<iostream>
using namespace std;
struct info
{
	int xh;
	string name;
	char xb;
	int fk;
	int tk;
};


int main()
{
	int n,sumnan=0,sumnv=0,max;

	while (cin >> n)
	{
		info* p = new info[n];
		for (int i = 0; i < n; i++)
			cin >> p[i].xh >> p[i].name >> p[i].xb >> p[i].fk >> p[i].tk;
		for (int i = 0; i < n; i++)//其实可以边输入边根据性别算总钱数 
		{
			if (p[i].xb == 'M')
			{
				sumnan += (p[i].fk - p[i].tk);
				continue;
			}
			if (p[i].xb == 'W')
			{
				sumnv += (p[i].fk - p[i].tk);
				continue;
			}
		}

		info tmp;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if ((p[j].fk - p[j].tk) > (p[j + 1].fk - p[j + 1].tk))
				{
					tmp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tmp;
				}
			}
		}
		cout << 'M' << sumnan << " " << 'W' << sumnv << endl;
		for (int i = n - 1; i >= 0; i--)
		{
			if (p[i].tk >= 0.5 * (p[i].fk))cout << p[i].xh << " ";
			cout << p[i].name << " ";
		}
		delete[] p;
		sumnan = 0;
		sumnv = 0;
		cout << endl;
	}
}
