#include <iostream>
using namespace std;

int main()
{
	int t, n, k;
	
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int c = 0,flag=0;
		cin >> n >> k;
		while (n > 0)
		{
			n -= k;
			c++;
			if(n<0){
				cout<<-1<<endl;
				flag=1;
			}
		}
		if(flag==0){
			cout<<c<<endl;
		}
	}
	return 0;
}
