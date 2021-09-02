#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(((int)str[i]>=65&&(int)str[i]<=86)or((int)str[i]>=97&&(int)str[i]<=118))
			cout<<(char)((int)str[i]+4);
		else if(((int)str[i]>=87&&(int)str[i]<=90)or((int)str[i]>=117&&(int)str[i]<=122))
			cout<<(char)((int)str[i]-22);
		else 
			cout<<str[i];
	}
}
