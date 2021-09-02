#include<iostream>
using namespace std;
static int x;
bool panduan(int a)//判断是否为回文数
{
	int count=0;
	int* p = new int[100];
	while (a)
	{
		p[count] = a % 10;
		a = a / 10;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (count % 2 != 0)
		{
			if (i == ((count + 1) / 2)-1)
				return true;
		}
		if (p[i] != p[count - 1 - i]) return false;
	}
	return true;
	delete[] p;
}



int daoxu(int a)//求逆序的数
{
	int b=1;
	int daoxu=0;
	while (a)
	{
		b = a % 10;
		daoxu = daoxu * 10 + b;
		a = a / 10;
	}
	return daoxu;
}

bool test(int n)
{
	int sum;
	if (panduan(n))
	{
		
		return false;
	}
	else
	{
		sum = n + daoxu(n);
		x = sum;
		cout << "-->"<<sum ;
		return true;
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		x = n;
		cout << x;
		bool tiaojian = true;
		while (tiaojian)
		{
			tiaojian=test(x);
		}
		cout <<endl;
	}
}
