#include <iostream>
using namespace std;
int main()
{
	int a[]= {2,-2,4,6,9};
	int n=5;
	int x=1;

	while(x<n)
	{
		for (int i = 0; i < x-1; i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
			}
		}
		x++;
	}

	for(int i=0; i<n; i++)
{
	cout << a[i] << " " ;
}



	return 0;
}