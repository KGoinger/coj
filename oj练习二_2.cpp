#include<iostream>
using namespace std;
int main()
{
	int n;
	char c;
	cout<<"How many lines ?"<<endl;
	cin>>n;
	cout<<"What character ?"<<endl;
	cin>>c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
			cout<<" ";
		
		for(int j=1;j<=(2*i-1);j++)
			cout<<c;
		cout<<endl;
	}
	
} 
