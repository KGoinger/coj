#include<iostream> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==1) 
		{
			cout<<"*";
			continue;
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n-i;j++)
				cout<<" ";
			cout<<"*";
			for(int j=1;j<=i-2;j++)
				cout<<" ";
			if(i!=1)cout<<"*";
			for(int j=1;j<=i-2;j++)
				cout<<" ";
			if(i!=1)cout<<"*";
			cout<<endl; 
		}
		for(int i=1;i<=n-1;i++)
		{
			for(int j=1;j<=i;j++)
				cout<<" ";
			cout<<"*";
			for(int j=1;j<=n-2-i;j++)
				cout<<" ";
			if(i!=n-1)cout<<"*";
			for(int j=1;j<=n-2-i;j++)
				cout<<" ";
			if(i!=n-1)cout<<"*";
			cout<<endl;
		}
		
	}
	cout<<endl;
}
