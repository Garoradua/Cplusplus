#include <iostream>
using namespace std;
int main()
{
	int A[]= {2,3,5};
	int n=3;
	int B = 15;
	int count=0;

	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(A[i]*A[j]>=B)
				break;
			else{
				count++;
			}
		}
	}
	cout << count;


	return 0;
}