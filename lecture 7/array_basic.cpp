#include <iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int n;
	cin >>n;

	for(int i=0;i<n;i++)
	{
		cin >> a[i];

	}
	for(int i=0;i<10;i++)
	{
		cout<< a[i];
		
	}
	return 0;
}
