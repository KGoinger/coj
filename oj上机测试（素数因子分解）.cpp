#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{//ԭ�����һ�������������������һ�����Ա�������С����ȥ�ֽ⡣��˶���ÿһ�����ӣ���ʹ��������������ô�Ҵ�2��ʼѰ��������ӵ�����
		//�Ϳ��Խ��䲻�Ϸֽ�
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
