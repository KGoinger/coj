#include<iostream>
using namespace std;
//递归，动态规划
//将偷n个店铺的问题缩小
//偷n个房子有两种偷法（即最后一间房子偷或者不偷），一种是如果最后一个不偷，则可以偷前n-1个；另一种如果偷最后一个，则只能再偷前n-2个
//只要对比这两种偷法哪个所得最大即可，使用递归即可
//注意，n=0时，所得为0；n=1时，只能偷第一间
int tou(int n,int *&p)
{
	if (n == 0)return 0;
	if (n == 1)return p[0];
	if (tou(n - 1, p) > (tou(n - 2, p) + p[n-1]))return tou(n - 1, p);
	else return tou(n - 2, p) + p[n-1];


}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *p=new int[n];
		for (int i = 0; i < n; i++)
			cin >> p[i];
		cout<<tou(n, p)<<endl;
		delete[] p; 
	}
}
