#include <iostream>
using namespace std;
int main()
{
	int n=3;
	for(int i=1; i<=n; i++)
	{
		int spaces,num;
		spaces=n-i;
		num=(2*i)-1;
		for(int j=1;j<=spaces;j++)
		{
			cout << " ";
		}
		for(int k=1;k<=num;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for( int i=n-1; i>=1; i--)
	{
			int spaces,num;
		spaces=n-i;
		num=(2*i)-1;
		for(int j=1;j<=spaces;j++)
		{
			cout << " ";
		}
		for(int k=1;k<=num;k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}