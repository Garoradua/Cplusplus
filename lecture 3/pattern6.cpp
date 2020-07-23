#include <iostream>
using namespace std;
int main()
{

	int n=5;
	for(int i=1;i<=n;i++)
	{
		int spaces,numbers;
		spaces=n-i;
		int val=1;
		numbers=(2*i)-1;
		for(int j=1; j<= spaces;j++)
		{
			cout << " ";
		}
		
			while (val<=i)
			{
				cout << val;
				val++;
				
			}
			val--;
			while (val>1)
			{
				val--;
				cout << val;
			}
			
		
		cout << endl;
		
	}
	return 0;
}