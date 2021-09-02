#include<iostream>
using namespace std;
int main()
{
	int  flag=1,m=0,t;
	char s[100];
	cin >> t;
	while (t--)
	{
		cin >> s;
		char *c=new char[26];
		for (int i = 0; i < strlen(s); i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (c[j] == s[i])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 0)
			{
				flag = 1;
				continue;
			}
			c[m] = s[i];
			m++;
			cout << s[i];
		}
		delete[] c;
		m = 0;
		flag = 1;
		cout << endl;
	}
}
