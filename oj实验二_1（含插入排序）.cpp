#include<iostream>
#include<cstring>
using namespace std;

class MyString
{
public:
	MyString()
	{
	}
	bool operator<(const MyString& p)
	{
		int num1 = 0, num2 = 0;
		for (int i = 0; i < content.length(); i++)
		{
			num1 += (int)content[i];
		}

		for (int i = 0; i < p.content.length(); i++)
		{
			num2 += (int)p.content[i];
		}
		if (num1 < num2)
			return true;
		else
			return false;
	}

	bool operator>(const MyString& p)
	{
		if (content.length() > p.content.length())
			return true;
		else
			return false;
	}

	string content;

};


int main()
{
	int n, num, k;
	string neirong;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		MyString* s = new MyString[num];
		MyString min;

		for (int j = 0; j < num; j++)
		{
			cin >> neirong;
			s[j].content = neirong;
		}
		//–¥“ª∏ˆ≤Â»Î≈≈–Ú 
		for (int i = 1; i < num; i++)
		{
			MyString key = s[i];
			int j = i - 1;
			while ((j >= 0) && (key < s[j]))
			{
				s[j + 1] = s[j];
				j--;
			}
			s[j + 1] = key;
		}


		for (int j = 0; j < num; j++)
		{
			cout << s[j].content << " ";
		}
		cout << endl;
		delete[] s;

	}
	

}
