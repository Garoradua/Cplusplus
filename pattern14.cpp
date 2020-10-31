#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int val=1;
	int count;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout << " " << " ";
		}
		
		for(int k=1; k<=i; k++)
		{
			cout << val << " ";
			val++;
			count=val;
		}
		count--;
		count--;
		for(int k=1; k<=i-1; k++)
		{
			cout << count <<" ";
			count--;
		}
		count++;
		val=count;
		val++;
		cout << endl;
	}
	return 0;
}