#include<iostream>
using namespace std;
//�ݹ飬��̬�滮
//��͵n�����̵�������С
//͵n������������͵���������һ�䷿��͵���߲�͵����һ����������һ����͵�������͵ǰn-1������һ�����͵���һ������ֻ����͵ǰn-2��
//ֻҪ�Ա�������͵���ĸ�������󼴿ɣ�ʹ�õݹ鼴��
//ע�⣬n=0ʱ������Ϊ0��n=1ʱ��ֻ��͵��һ��
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
