#include<iostream>
#include<cmath>
using namespace std;

const long double Pi=3.14159265;

class point
{
	public:
	point(){}
	point(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	void getxy()
	{
		cout<<"("<<x<<","<<y<<")";
	}
	
	int x,y;	
};

class xianduan:	public point
{
	public:
		xianduan(point &p1,point &p2)
		{
			xp1.x=p1.x;
			xp1.y=p1.y;
			xp2.x=p2.x;
			xp2.y=p2.y;
		}
		
		void showstart()
		{
			cout<<"("<<xp1.x<<","<<xp1.y<<")"<<endl;
		}
		void showend()
		{
			cout<<"("<<xp2.x<<","<<xp2.y<<")"<<endl;
		} 
		void showlen()
		{
			cout<<(sqrt((xp2.x-xp1.x)*(xp2.x-xp1.x)+(xp2.y-xp1.y)*(xp2.y-xp1.y)))<<endl; 
		}
		void showjiao()
		{
			cout<<((long double)180/Pi)*atan(((long double)xp2.y-(long double)xp1.y)/((long double)xp2.x-(long double)xp1.x))<<endl;
			
		}

		point xp1,xp2;
	
	
};

class sibianxing:public point
{
	
	public:
		sibianxing(point &p1,point &p2,point &p3,point &p4)
		{
			this->p1=p1;
			this->p2=p2;
			this->p3=p3;
			this->p4=p4;
		}
		
		
		point p1,p2,p3,p4;
};






int main()
{
	int a1,b1,a2,b2,c1,d1,c2,d2,n,i=1;
	cin>>n;
	while(i<=n)
	{
	cin>>a1>>b1>>a2>>b2>>c1>>d1>>c2>>d2;
	point p1(a1,b1),p2(a2,b2),p3(c1,d1),p4(c2,d2);
	
	
	xianduan xd1(p1,p2);
	xd1.showlen();
	xd1.showjiao();
	
	sibianxing s1(p1,p2,p3,p4);
	s1.p1.getxy();
	s1.p2.getxy();
	s1.p3.getxy();
	s1.p4.getxy();
	i++;
	}
	
} 
