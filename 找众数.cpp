//标准思路：从第一个数开始，对其后面的数进行遍历，如果有一样的就将次数加一，遍历完成后与最大次数做比较，
//如果比最大次数还大，则最大次数变为该数对应的次数，众数变为该数 
#include<iostream>
using namespace std;

struct biao
{
	int shu;
	int zhi;
};

int mode(int* p, int n)
{
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
	biao* b = new biao[n];
	int m = 0;//用于定义b的下标
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[j].shu == p[i])
			{
				a[b[j].zhi]++;
				break;
			}
		}
	
		b[m].shu = p[i];
		b[m].zhi = m;
		m++;	
	}
	int max=a[0],maxi=0,i;
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
	}
	int t = b[maxi].shu;
	delete[] a;
	delete[] b;
	return t;

}


int main()
{
	int t,i=0;
	int arr[100];
	while (cin >> t)
	{
		arr[i] = t;
		i++;
	}
	cout << mode(arr, i);

}
/*#include <iostream>
   using namespace std;
   int mode(int a[ ], int n)
   { int i , j, m=0, len, c;
     for (i=0; i<n; i++)
{  len=1;
   for (j=i+1; j<n; j++)
      if (a[i]==a[j]) len++;
   if (len>m)
   {  m=len;  c=a[i];
   }
}
return c;
}
int main( )
{  int z, i , a[7];
   for (i=0; i<7; i++) cin>>a[i];
   z=mode(a,7);
   cout<<"众数是"<<z<<endl;
   return 0;
}
*/
