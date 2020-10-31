#include <iostream>
using namespace std;
int main()
{
	int n=5;
	int count=1;
	int col=1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(count<=9)
				{
					cout << count << " ";
						count++;
					}
			else
			{
				count =1;
				cout<<count<<" ";
				count++;
			}

		}
		col = col*2;
		cout << endl;
	}
}