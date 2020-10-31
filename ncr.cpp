#include<iostream>
using namespace std;

int factorial (int a)
{  int ans=1;
	for(int i=1; i<=a; i++)
	{
		ans=ans*i;
	}
	return ans;
}
int main()
{
	int n,r;
	cin >> n;
	cin >> r;

	int x= factorial(n);
	int y= factorial(r);
	int ncr= factorial (n-r);
	cout << x/(y*ncr);
	return 0;
}