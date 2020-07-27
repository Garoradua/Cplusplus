#include<iostream>
using namespace std;
int linearsearch(int si, int arr[], int n, int key){
	if(si==n){
		return -1;
	}
	if(arr[si] == key){
		return si;
	}else{
		int index= linearsearch(si+1, arr, n, key);
		return index;
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int key = 9;
	int n = 10;
	int si=0;
	cout << linearsearch(si, arr, n, key);
	return 0;

}