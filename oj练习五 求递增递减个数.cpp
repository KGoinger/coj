#include<iostream>
using namespace std;
static int dj = 0, dz = 0;
int dijian(int*, int, int);
int dizeng(int*, int, int);
int main()
{
	int a, num[50], i = 0;//i是几就代表有几个元素 
	while (true)
	{
		cin >> num[i];
		if (num[i] == 0) break;
		i++;
	}
	int start;
	start = num[0];
	for (int j = 1; j < i;)
	{
		if (num[j] < num[j - 1]) j = dijian(num, j, i);
		if (num[j] > num[j - 1]) j = dizeng(num, j, i);
	}
	/*cout << dz << " " << dj;*/
}

int dijian(int* num, int m, int i)
{
	dj++;
	for (; m <= i; m++)
	{
		if (num[m] == 0)
		{
			cout << dz << " " << dj;
		/*	system("pause");*/
		}
		if (num[m] < num[m - 1])continue;
		else return m;
	}
}

int dizeng(int* num, int m, int i)
{
	dz++;
	for (; m <= i; m++)
	{
		if (num[m] == 0)
		{
			cout << dz << " " << dj;
		/*	system("pause");*/
		}
		if (num[m] > num[m - 1])continue;
		else return m;
	}
}
