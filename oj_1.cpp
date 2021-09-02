#include<iostream>
using namespace std;
class CBank;
class JBank;
class GBank;
class CBank
{
	friend void calculate(CBank* c, JBank* j, GBank* g);
public:
	void setbal(int a)
	{
		balance = a;
	}
private:
	double balance;
};

class JBank
{
	friend void calculate(CBank* c, JBank* j, GBank* g);
public:
	void setbal(int a)
	{
		balance = a;
	}
private:
	double balance;
};

class GBank
{
	friend void calculate(CBank* c, JBank* j, GBank* g);
public:
	void setbal(int a)
	{
		balance = a;
	}
private:
	double balance;
};


void calculate(CBank *c,JBank *j,GBank *g)
{
	cout <<( c->balance+j->balance+g->balance)<<endl;
}



int main()
{
	CBank cb;
	JBank jb;
	GBank gb;
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		cb.setbal(a);
		jb.setbal(b);
		gb.setbal(c);

		calculate(&cb, &jb, &gb);
	}
}