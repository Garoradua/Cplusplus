#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i=0; i<5; i++)
	{
		cin >> a[i];
	}

	int min= a[0];

	for(int i=0; i<5; i++)
	{
		if(a[i]<min)
			min=a[i];

	}
	cout << min;
	return 0;
}