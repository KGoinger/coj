#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i <= n; i++)
	{
		a[i] = 1;
		for (int j = i - 1; j > 0; j--)
		{
			a[j] = a[j ] + a[j - 1];
		}
		
		for (int j = 1; j <= i+1; j++)
			cout << a[j-1]<<" ";
		cout << endl;
	}
	delete[] a;
}
