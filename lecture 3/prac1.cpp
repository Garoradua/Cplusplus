#include <iostream>
using namespace std;
int main()
{
	int n=5;
	for (int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout << j <<"\t";
		}
		cout << endl;
	}
	return 0;
}


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5