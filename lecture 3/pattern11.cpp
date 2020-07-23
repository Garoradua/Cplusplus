#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << "1" << endl;
	for(int i=2;i<=n;i++)
	{
		cout << "1";
		for(int j=1;j<=i-2;j++)
		{
		if(i%2==0)
			{
				cout << "0";
			}
		if(i%2!=0)
			{
				cout << "1";
			}

		}
		cout << "1" << endl;
	}
	return 0;
}