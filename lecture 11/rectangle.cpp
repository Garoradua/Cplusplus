
#include<iostream>
using namespace std;

void rectangle(int a[4], int n, int k)
{
	int left= 0;
	int right = n-1;
	int count =0;

	while(left <= right)
	{
	if(a[left]*a[right]<k)
	{
		count	= count + (right-left)*2+1;
		left++;
	}

	else{
		right--;
		}
	}
	cout << count ;
}
int main()
{	int a[]= {2,3,4,5};
	int n=4;
	int k=15;

	rectangle(a,4,15);
	return 0;
}
