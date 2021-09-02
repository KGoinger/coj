#include<iostream>
using namespace std;
int func(int a, int b)
{
	if (b == 0)return a;
	else if (b > 0)
		return func(b, (a % b));
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << func(a, b);
}
