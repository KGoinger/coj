#include<iostream>
#include<cmath>
using namespace std;

int weishu(int a)
{
	int len = 0;
	while (a)
	{
		a = a / 10;
		len++;
	}
	return len;
}


int func(int k, int l)
{
	int yu;
	int* num = new int[l];
	for (int i = 0; i < l; i++)
	{
		yu = k % 10;
		for (int j = 0; j < l; j++)
			if (num[j] == yu)	return 0;
		num[i] = yu;
		k = k / 10;
	}
	delete[] num;
	return 1;
}





int main()
{
	int n, k, yu, count = 0, j = 0, flag = 0;
	cin >> n;
	for (int i = 0; i < pow(10, n); i++)
	{
		k = i;
		int l = weishu(k);
		count += func(k, l);
	}
	cout << count;
}
