#include <iostream>
using namespace std;

void sorted(int arr[][4], int key, int col, int row)
{
	int startr=0;
	int startc= col-1;
	while(startr <row && startc >=0)
	{
	if (key==arr[startr][startc])
	{
		cout << "element found at" << startr << startc << endl; 
		return;
	}
	else if(key>arr[startr][startc])
	{
		startr++;
	}
	else{
		startc--;
	}
	}
	cout << "element not found";
}
int main()
{	
int arr[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};

int key=1;
int n=4;
int col=4;
int row=4;

sorted(arr,key,4,4);

	return 0;
}