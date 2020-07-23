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
		for(int j=1; j<=n;j++)
		{
			cout << "*" ;

		}	
		cout << endl;
		}
		if(i>=2 && i<=(n/2)+1)	
		for(int j=1; j<=n/i;j++)
		{
			cout<< "*";
		}
		for(int j=1; j<=n-(2*(n/i));j++)
		{
			cout<< " ";
		}
		for(int j=1; j<=n/i;j++)
		{
			cout<< "*" ;
		}
		cout << endl;
		if(i>=(n/2)+1)
		{
			for(int j=1; j<=n/i;j++)
		{
			cout<< "*";
		}
		for(int j=1; j<=n-(2*(n/i));j++)
		{
			cout<< " ";
		}
		for(int j=1; j<=n/i;j++)
		{
			cout<< "*" ;
		}
		}
	}
}