#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{//原理：如果一个数不是素数，这个数一定可以被比他更小的数去分解。因此对于每一个因子，即使他不是素数，那么我从2开始寻找这个因子的因子
		//就可以将其不断分解
		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				n = n / i;
				cout << i<<" ";
				i = 1;
			}
		}
		cout << endl;
	}

}
/*#include<iostream>
using namespace std;
int main ()
{
  int n,y;
  while(cin>>n)
  { 
for(y=2;y<=n;y++)
     {
while(n%y==0) 
{
cout<<" "<<y; n /=y;
}
}
     cout<<endl;
}
     return 0;
}
*/
