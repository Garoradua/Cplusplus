#include<iostream>
using namespace std;
int main()
{

	int a[4][4];


	int row=3;
	int r=0;
	int column=3;
	int c=0;
	int nop=1;
	int val=1;

	for(int i=0; i<=row; i++){
		for(int j=0; j<=column; j++)
			a[i][j]= val;
			val++; 
	}
	while(nop<=row*column){
	for(int i=c; i<=column; i++)
	{
		cout << a[r][i] << " ";
		}
		r++;
	for(int j=r; j<=row; j++)
	{
		cout << a[j][column] << " ";
	}
	 column--;
	for(int i=column; i<=c; i--){
		cout << a[row][i] << " ";
	}
	row--;
	for(int i=row; i<=r; i--)
	{
		cout << a[i][c] << " ";
	}
	c++;
}

	return 0;
}