#include<iostream>
using namespace std;

class gua
{
public:
	double weight;
	static double tweight;
	static int total;

public:
	gua()
	{
	}
	gua(double zhongliang)
	{
		total++;
		weight = zhongliang;
		tweight = tweight + weight;
	}

	~gua()
	{
		total--;
		tweight -= weight;
	}

	static double gettweight()
	{
		return tweight;
	}
	static int gettotal()
	{
		return total;
	}

};

int gua::total = 0;
double gua::tweight = 0;


int main()
{
	int n, i = 0, num;
	double zhongliang;
	gua* g[100];
	while (true)
	{
		cin >> n;
		if (n == 1)
		{
			cin >> zhongliang;
			g[i] = new gua(zhongliang);
			i++;

		}
		else if (n == 0)
		{
			cin >> num;
			g[num - 1]->~gua();
		

		}


		else if (n == -1)\
		{
			cout << gua::gettweight() << endl;
			cout << gua::gettotal() << endl;
			break;
		}
	}
}
