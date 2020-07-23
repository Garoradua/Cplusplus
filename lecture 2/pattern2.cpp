#include <iostream>
using namespace std;
int main()
{
	cout << "Enter no of rows";
	int n;
	int j;
	int z;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for( j=i-1;j<n;j++)
		{
			cout << " ";
		}
		j++;
		if (j==i)
			for(z=0;z<i;z++)
		{
		cout << " *";
		}
		cout << endl;
	}
}