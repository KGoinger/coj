#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[60];
	int count=0;
	cin>>s;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='('&&s[i+1]!=')'&&s[i+1]!='p')
		{
			count++;
			continue;
		}
		
		if(s[i]=='('&&s[i+1]==')')
		{
			i=i+2;
			continue;
		}
		if(s[i]==')'&&s[i+1]=='(')i=i+2;
		if(s[i]=='p')
		{
		cout<<count;
		return 0;
		}
		if(s[i]=='('&&s[i+1]=='p')
		{
			cout<<(count+1);
			return 0;
		}
		
	}
} 
/*#include<iostream>
#include<string> 
using namespace std;

int main(void) {
	string s;
	while (cin >> s) {
		int n = 0;
		for (int i=0;i<s.size();++i) {
			if (s[i] == '(') ++n;
			else if (s[i] == ')') --n;
			else {
				cout << n << endl;
				break;
			}
		}
	}
    return 0;
}*/ 
