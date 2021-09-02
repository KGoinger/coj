#include<iostream>
using namespace std;
int main()
{
	int month,day;
	cin>>month>>day;
	if(day!=13)
	{
		cout<<"No";
		return 0;
	}
	else if(month==10 or month ==1)
	{
		cout<<"Yes";
		return 0; 
	}

} 
