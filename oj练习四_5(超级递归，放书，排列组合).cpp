#include<iostream>
using namespace std;

int rec(int n,int k)
{
	if(n==1||k==1) return 1;
	if(n<k) return rec(n,n);
	return rec(n,k-1)+rec(n-k,k);//���n���ڵ���k����һ��ʽ����������һ�����Ӳ����飬�ڶ���ʽ����ÿһ�����Ӷ�����
}

int main()
{
	int n,k;
	while(cin>>n>>k)
		cout<<rec(n,k)<<endl;
} 
