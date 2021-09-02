#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int i = 0, p[100];
		while (true)
		{
			if (n == 0)break;
			if (n % 2 == 0)
			{	
				p[i] = 0;
				i++;
				n = n / 2;
			}
			if (n % 2 == 1)
			{
				p[i] = 1;
				i++;
				n = n / 2;
			}
		}
		for (i-=1; i >= 0; i--)
			cout << p[i];

		cout << endl;
	}
}
/*#include <iostream>
using namespace std;

void dec_to_bin(int n){
    if(n==0){
        cout<<"0";
    }
    else if(n==1){
        cout<<"1";
    }
    else{
        dec_to_bin(n/2);
        cout<<n%2;
    }
}

int main(){
    int n;
    while(cin>>n){
        dec_to_bin(n);
        cout<<endl;
    }
    return 0;
}
*/
