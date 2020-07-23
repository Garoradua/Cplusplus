#include <iostream>
using namespace std;
int main()
{
	int a[]= {2,-2,3,7,1};
	int n=5;
	int divider =1;

	while(divider < n)
	{
		for(int i=divider; i>0; i--)
		{
			if(a[i]<a[i-1])
			{
				swap(a[i],a[i-1]);
			}
		}
		divider ++;
	}

		for(int i=0; i<n; i++)
{
	cout << a[i] << " " ;
}




	return 0;
}