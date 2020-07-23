#include<iostream>
using namespace std;

targetsum(int a[], int n, int target){
int left = 0;
int right = n-1;
int count = 0;
while(left<right){
if(a[left]+a[right]== target)
{
	count++;
	right--;
	left++;
}

else if(a[left]+a[right]<target){
	left++;
}

else{
	right--;
}
}
cout << count ;
}
int main()
{
	int a[]= {0,1,2,3,4,5,6,7,8,9};
	int n=10;
	int target= 7;

	targetsum(a,n,target);



	return 0;
}
