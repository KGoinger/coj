#include<iostream>
#include<cmath>
using namespace std;

double jc(int a)
{
	if(a==0) return 1;
	return a*jc(a-1);
}

double js(int x,int y)
{
	double sum=0;
	for(int i=1;i<=x;i++)
		sum+=pow(i,y);
	return sum;
}

int main()
{

	int m,n,l,p;
	cin>>m>>n>>l>>p;
	double s;
	s=(js(m,1)+js(n,2)+jc(l))/(js(p,3));
	cout<<s<<endl;

}
