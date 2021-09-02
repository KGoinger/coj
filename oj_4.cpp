#include<iostream>
#include<cstring>
using namespace std;

class zhuanhuan
{
	friend void zh(zhuanhuan &zimuzhuanhuan,int len);
	public:
		zhuanhuan(string sc)
		{
			sentence=sc;
		}
		
		string getsentence()
		{
			return sentence;
		}
		string sentence;
};


void zh(zhuanhuan &zimuzhuanhuan,int len)
{
	for(int i=0;i<=len-1;i++)
	{
		if(zimuzhuanhuan.sentence[i]>='a' && zimuzhuanhuan.sentence[i]<='z')
		{
			zimuzhuanhuan.sentence[i]=(char)(zimuzhuanhuan.sentence[i]-32);
		}
	}
}



int main()
{
	string sentence;
	getline(cin,sentence);
	int len=sentence.length();
	zhuanhuan zmzh(sentence);
	zh(zmzh,len);
	cout<<zmzh.getsentence();

} 
