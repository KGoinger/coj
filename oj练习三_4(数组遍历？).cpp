#include<iostream>
using namespace std;
int main() 
{

	while(true)
	{
	int price[7],mairu,maichu,profit,max=0,mairutime,maichutime;
	for(int i=0;i<7;i++)
	{
		cin>>price[i];
	}
	
	for(int i=0;i<7;i++)
	{
		mairu=price[i];
		for(int j=i+1;j<7;j++)
		{
			maichu=price[j];
			profit=maichu-mairu;
			if(profit>max)
			{
				max=profit;
				mairutime=i;
				maichutime=j;
			}
			
		}
	}
	cout<<max<<endl;
	}
}
