#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		if(i==1)
		{
			for(int j=1; j<=n-1; j++)
			{
				cout << " ";
			}
			for(int k=1; k<=n; k++)
			{
				cout << "*" << endl;
			}
		}	
		if(i>=2 && i<n)
		{
			int space= n-i;
			for(int j=1; j<=space; j++)
			{
				cout << " ";
			}
			cout <<"*   *";
		}
		if(i==n)
		{
			for(i=1;i<=n;i++)
			{
				cout << "*" << endl;
			}
		}
	}
	return 0;

}