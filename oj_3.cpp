#include<iostream>
using namespace std;

class rect
{
	public:
		rect(int a,int b,int c)
		{
			length=a;
			width=b;
			height=c;
		}
		int area()
		{
			return (length*width+length*height+width*height)*2;
		}
	
	
	private:
	int length,width,height;
};


int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		rect r(a,b,c);
		cout<<r.area()<<endl;
	}
} 
