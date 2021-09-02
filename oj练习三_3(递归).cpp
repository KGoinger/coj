#include<iostream>
using namespace std;

bool find8(int a)
{
	int sum;
	if(a<10&&a!=8)	return false;
	while(a>0)
	{
		int yu=a%10;
		if(yu==8) return true;
		else{
			sum+=yu;
			a=a/10;
		}
	}
	return find8(sum);
} 






int main()
{
	int a;
	
	while(cin>>a)
	{
	if(find8(a)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
}
