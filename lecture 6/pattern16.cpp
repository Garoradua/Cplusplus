#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int val1,val2;
	for(int i=1; i<=n; i++)
		{
			if(i==1)
				{
					cout << "0" << endl;
					val1=0
					val2=1;
				}
			for(int j=1; j<=i; j++)
			{
				cout << val2 ;
				val1=val2;

			}
			cout << endl;
		}
}