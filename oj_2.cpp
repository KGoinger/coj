#include<iostream>
#include<cmath>
using namespace std;


class Point
{
public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(int a,int b)
	{
		x=a;
		y=b;
	}
	void setpoint(int a,int b)
	{
		x=a;
		y=b;
	}
	int getx()
	{
		return x;	
	}
	
	int gety()
	{
		return y;	
	}
	
	private:
		int x,y;
};

class juxing
{
	public:
	void chakan()
	{
		cout<<"1:("<<point1.getx()<<","<<point1.gety()<<")"<<endl;
		cout<<"2:("<<point2.getx()<<","<<point2.gety()<<")"<<endl;
		cout<<"3:("<<point3.getx()<<","<<point3.gety()<<")"<<endl;
		cout<<"4:("<<point4.getx()<<","<<point4.gety()<<")"<<endl;

	}
	
	
	void setxy(Point &po1,Point &po2)
	{
		point1=po1;
		point4=po2;
		
		point2.setpoint(po2.getx(),po1.gety());
		point3.setpoint(po1.getx(),po2.gety());
		
	}
	
	
	void calcs(Point &po1,Point &po2)
	{
		cout<<abs(po2.getx()-po1.getx())*abs(po2.gety()-po1.gety())<<endl;
	}
	
	private:
		Point point1,point2,point3,point4;
		
};





int main()
{
	int x1,y1,x2,y2,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		Point p1(x1,y1),p2(x2,y2);
		juxing jx;
		jx.setxy(p1,p2);
		jx.chakan();
		jx.calcs(p1,p2);
//		cout<<i<<" "<<p1.getx()<<" "<<p1.gety()<<" "<<p2.getx()<<" "<<p2.gety()<<endl;
			
	}

}
