#include<iostream>
using namespace std;
bool findzfx(int p[101][101],int i,int j,int n)//��Ҫ�ҵ��׵�ַ(��һ����һ��)���������ٴ������߳�
{
	int a = i, b = j;
	for (; i < a+n; i++)
	{
		for (; j < b+n; j++)
		{
			if (p[i][j]== 0)return false;
		}
	}
	return true;
}

int main()
{
	//��ά��̬������ô�㣿int **p=new int* [n];
	//��ά���鴫�Σ�
	int n, m;
	while (cin >> n >> m)
	{
		int p[101][101];
		int y;//��¼����ֵ
		bool tiaojian=false;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> p[i][j];
		int c;
		if (n <= m)c = n;
		else c = m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				for (int x = 2; x <= c; x++)
				{
					tiaojian=findzfx(p, i, j, x);
					if (tiaojian)
					{
						y = x;
						tiaojian = false;
						break;
					}
					tiaojian = false;
				}
			}
		}

		cout << y << endl;
	}
}
