#include <iostream>
using namespace std;
int main()
{
	int a[4][4];
	int row=4;
	int column=4;
	int val=1;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			a[i][j]= val;
			val++;
		}

	}


	for(int i=0; i<column; i++)
	{
			if(i%2==0)
			{
				for(int j=0; j<row; j++){
					cout<< a[j][i] << " ";
				}
			}
			else{
				for(int j=row-1; j>=0; j--){
					cout<< a[j][i] << " ";
				}
			}
	}


	return 0;
}