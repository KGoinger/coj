#include<iostream>
#include<string>
using namespace std;

class Publication
{
	public:
		string title;
		float price;
};

class book:public Publication
{
	public:
		int page;
	void show()
	{
		cout<<title<<" "<<price<<" "<<page<<endl;
	}
};

class Tape:public Publication
{
	public:
	float playTime;	
	void show()
	{
		cout<<title<<" "<<price<<" "<<playTime<<endl;
	}
};



int main()
{
	book b1;
	Tape t1;
	cin>>b1.title>>b1.price>>b1.page;
	cin>>t1.title>>t1.price>>t1.playTime; 
	
	b1.show();
	t1.show();
	
	
	
	
	
} 
