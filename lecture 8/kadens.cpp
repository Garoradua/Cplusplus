#include<iostream>
using namespace std;
int main()
{
	int a[]= {2,2,-2,-4,-6,-8,10,-11};
	int n=8;
	int maxsum= a[0];
	int currentsum= a[0];

	for(int i=1; i<n; i++)
	{
		int both = currentsum + a[i];
		int present = a[i];


		currentsum = max(both, present);

		if(currentsum> maxsum)
		{
			maxsum = currentsum;
		}

	}

	cout << "Maximum sum is " << maxsum << endl;
	return 0;
}