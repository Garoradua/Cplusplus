#include<iostream>
using namespace std;
int main()
{
	int col=3;
	int row=3;
	int a[3][3]={{1,2,3},
		{4,5,6},
		{7,8,9}};
	for(int i=0; i<col; i++)
	{
		if(i%2==0)
		{
			for(int j=0; j<row; j++)
			{
				cout << a[j][i];
			}

		}
		else
		{
			for(int j=row-1; j>=0; j--)
			{
				cout << a[j][i];
			}

		}
	}
	return 0;
}