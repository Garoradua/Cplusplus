// rotation about 90 degree

#include<iostream>
using namespace std;

void rotation(int a[][3],int temp[][3],int row,int col){
//transpose
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			temp[j][i]= a[i][j];
		}
	}
//rotation
	for(int r=0; r<row; r++)
	{
		int i=0;
		int j= col-1;
		while(i<j){
		swap(temp[r][i],temp[r][j]);
		i++;
		j--;
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

rotation(a,temp,3,3);

for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << temp[i][j] << " ";
			}
			cout << endl;
		}




	return 0;
	}