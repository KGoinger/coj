#include<iostream>
using namespace std;
static int sum=0;
void func(int n)
{
	if (n == 0)sum+=0;
	else if (n == 1)sum+=1;
	else
	{
		func(n / 2);
		sum+=(n % 2);
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		func(n);
		cout << sum<<endl;
		sum = 0;
	}
}
