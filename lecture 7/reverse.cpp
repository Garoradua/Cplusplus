#include <iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i=0; i<5; i++)
	{
		cin >> a[i];
	}

	int n=5;

	int left =0;
	int right= n-1;

	while(left<right)
		{
			swap(a[left], a[right]);
			left++;
			right--;
		}

for(int i=0; i<5; i++)
	{
		cout << a[i] << " ";
	}
	return 0;

}