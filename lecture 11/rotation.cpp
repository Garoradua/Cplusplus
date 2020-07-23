#include<iostream>
using namespace std;

void rot(int a[][3], int temp[][3], int row, int col, int val)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{	
			temp[j][i]= a[i][j];
			
			
		}
		
	}

	for(int i=0; i<row; i++)
	{
		int m =0;
		int n= col-1;

		while(m<n)
		{
			swap(temp[i][m], temp[i][n] );
			m++;
			n--;
		}
	}
}
int main()
{
	int a[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
	
	int temp[3][3];
	int row=3;
	int col=3;
	int val=1;

	rot(a, temp, 3,3,1);

	

	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			cout << temp[i][j] << " ";	
		}
		cout << endl;
	}
	





	return 0;	
}