#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k=0,flag=0;
	cin>>n;
	int *p=new int[n];
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(flag==0)
			{
				p[k]=i;
				k++;
			}
		flag=0;
	}
	
	for(int i=0;i<k;i++)
		for(int j=0;j<k;j++)
			if(p[i]+p[j]==n) 
			{
			cout<<n<<"="<<p[i]<<"+"<<p[j]<<endl;
			delete[] p; 
			return 0;
			}
	
}
/*#include <iostream>
#include <cmath>

using namespace std;

int prime(int m)
{
	int i,yes=1,k;
	k = sqrt(double(m));
	for (i = 2; i <= k; i++)
	{
		if (m%i == 0)
		{
			yes = 0;
			break;
		}
	}
	return yes;
}

int main()
{
	int num;
	cin>>num;

	if (num == 2) cout<<"2=1+1"<<endl;
	else if (num == 3) cout<<"3=1+2"<<endl;
		 else{
				for (int j = 2; j <= num/2; j++)
				{
					if( prime(j)&&prime(num-j))
					{
						cout<<num<<"="<<j<<"+"<<num-j<<endl;
						break;
					}
				}
		}
	//system("pause");
	return 0;
}
*/
