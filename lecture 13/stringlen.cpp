#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[1000];
	char largest[1000];
	int n;
	cin >> n;
	int len=0;
	int lar_len=0;

	for(int i=0; i<n; i++)
	{
		cin.getline(a,1000);
		len= strlen(a);

		if(len>lar_len)
		{
			lar_len= len;
			strcpy(largest,a);
		}
	}
	cout << largest << lar_len << endl;


	return 0;

}