#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if (i==1)
		{
			cout << "1" << endl;
			break;
		}
		if (i>=2){
		cout << i-1;
		for(int j=1; j<i-1;j++)
		{
			cout << "0";
		}
		cout << i-1 << endl;
		}
	}
	return 0;
}