#include <iostream>
using namespace std;
int main()
{
	int n=4;
	for(int i=1;i<=n;i++)
	{
		int spaces,stars;
		spaces=n-i;
		stars=(2*i)-1;

		for(int j=1; j<=spaces;j++)
		{
			cout << " ";
		}
		for (int k=1; k<=stars;k++)
		{
			cout << "*";
		}
		cout<<endl;
	}
	return 0;
}