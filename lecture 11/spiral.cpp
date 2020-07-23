#include<iostream>
using namespace std;
int main()
{
	int a[4][4];
	int row=4;
	int col=4;
	int val=1;
	int start_row=0;
	int start_col=0;
	int end_row=row-1;
	int end_col=col-1;
	int noofprint= 1;


	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			a[i][j] = val;
			val++;
			
		}
		
	}
	while(noofprint<row*col){
	for(int i=start_col; i<=end_col; i++)
	{
		cout << a[start_row][i] << " ";
		
		noofprint++;
	}
	start_row++;

	for(int i=start_row; i<=end_row; i++)
	{
		cout << a[i][end_col] << " ";
		
		noofprint++;
	}
	end_col--;

	for (int i = end_col; i >= start_col; i--)
	{
		cout << a[end_row][i] << " ";
		
		noofprint++;

	}
	end_row--;
	for (int i = end_row; i >= start_row; i--)
	{
		cout << a[i][start_col] << " ";
		
		noofprint++;
	}
	start_col++;
}



	return 0;
}