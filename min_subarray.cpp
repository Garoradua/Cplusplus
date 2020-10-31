#include <iostream>
using namespace std;
int main()
{
	int arr[]= {2,-2,-5,11,-6};
	int n=5;
	int currentsum=arr[0];
	int minsum=arr[0];
	int present,both;

	for(int i=1; i<n; i++)
	{
		both= currentsum+ arr[i];
		present= arr[i];

		currentsum= min(both,present);

		if(currentsum<minsum)
		{
			minsum=currentsum;
		}
	}

	cout << minsum;

	return 0;
}
