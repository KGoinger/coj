#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string s;
	char c[26]="";
	int j = 0,flag=0;
	getline(cin,s);
	for (int i = 0; i < s.length(); i++)
	{
		for (int m = 0; m < 26; m++)
		{
			if (c[m] == s[i])
			{
				flag = 2;
				break;
			}
		}
		if (flag == 2)
		{
			flag=0;
			continue;
		}
		c[j] = s[i];
		j++;
		cout << s[i];
		flag = 0;

		if (flag == 1)
		{
			cout << s[i];
			flag = 0;
		}
	}
}

/*#include <iostream>
#include <stdio.h>//gets函数需要包含这个头文件 
#include <string.h>
using namespace std;

void fun(char a[]);
int main()
{
	char a[100];
	gets(a);
	fun(a);
	return 0;
}
void fun(char a[])
{
	int n,i,j,k;
	n=strlen(a);
	for(i = 1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i] == a[j])
			{
				for(k=i;k<n;k++)
					a[k] = a[k+1];
				a[k] = '\0';
				i--;//因为删除了原本a[i]指向的字符，所以将i减1，使得其指向前一个字符（相当于回退一个） 
				n--;
				break;
			}
		}
	}
	cout<<a<<endl;
}*/
