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
			for(int j=1; j<n; j++)
			{
			cout << " ";
			}
			for(int k=1; k<=n; k++)
			{
				cout << "*" ;
			}
			cout << endl;
		}
		if(i>=2 && i<n)
		{
			for(int j=1; j<=n-i; j++)
			{
				cout << " ";
			}
			cout << "*"  ;
			for(int k=1; k<=n-2; k++)
			{
				cout << " ";
			}
			cout << "*" << endl;

		}
		if(i==n)
		{
			for(int j=1; j<=n; j++)
			{
				cout << "*" ;
			}
			cout << endl;
		}

	}
	return 0;
}