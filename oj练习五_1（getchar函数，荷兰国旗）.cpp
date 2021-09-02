#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int  b,w,r,i,n,j;
    char c;
	cin>>n;/*输入行数*/
	while(getchar()!='\n'); 
	for(i = 0;i < n; i++)
	{
		b=0;w=0;r=0;
		  while((c=getchar())!='\n')/*逐个读取字符*/
	  {
		  if(c =='R') r++;  
		  else if(c == 'W')w++;
		  else  if(c == 'B')b++;
	  }
	  for(j = 0;j < r; j++)
		  cout<<'R';
	  for(j = 0;j < w; j++)
		  cout<<'W';
	  for(j = 0;j < b; j++)
		  cout<<'B';
	  cout<<endl;
	}
	return 0;
}

