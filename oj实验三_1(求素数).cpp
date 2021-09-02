#include<iostream>
#include<cmath>
using namespace std;


bool sushu(int s)
{
	int flag=1;
	for(int m=2;m<=sqrt(s);m++)
	{
		if(s%m==0)
			flag=0;	
	}
	if(flag==0)
		return false;
	else 
		return true;
	
	
}


int main()
{
	int n,a,b,x,y,jishu=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(int j=a;j<=b;j++)
		{
		if(j!=1)
			if(sushu(j))
			{
				x=j/10;
				y=j%10;
//				x=j%10;
//				y=j-x*10;
				if(sushu(x+y))
				{
					jishu++;
				}
			}
		}
		cout<<"Case #"<<i<<": "<<jishu<<endl;
		jishu=0;
	}
} 
