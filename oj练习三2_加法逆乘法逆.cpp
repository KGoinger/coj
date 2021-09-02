#include<iostream>
using namespace std;
int main()
{
	int t,m,n,flag1=0,flag2=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=n;i!=0;i--)
		{
			if((m+i)%n==0)
			{
				flag1=1;
				cout<<i<<" ";
			}
			else
					continue;
					

		}
		if(flag1==0)
				cout<<"0";
		for(int i=n;i!=0;i--)
		{
			if((m*i)%n==1)
			{
				flag2=1;
				cout<<i<<" ";
			}
			else
					continue;
				
		}
		if(flag2==0)
			cout<<"0";
				
			cout<<endl;
	}
}
