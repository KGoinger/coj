#include<iostream>
using namespace std;

int rec(int n,int k)
{
	if(n==1||k==1) return 1;
	if(n<k) return rec(n,n);
	return rec(n,k-1)+rec(n-k,k);//如果n大于等于k，第一个式子是至少有一张桌子不放书，第二个式子是每一张桌子都有书
}

int main()
{
	int n,k;
	while(cin>>n>>k)
		cout<<rec(n,k)<<endl;
} 
