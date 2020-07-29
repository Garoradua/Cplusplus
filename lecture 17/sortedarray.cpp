#include<iostream>
using namespace std;

bool sorted(int a[], int si, int n){
    if(si == n-1){
    	return true;
    }

	if(a[si]>a[si+1]){
		return false;
	}

	bool isproblemsorted = sorted(a, si+1, n);
	return isproblemsorted;
	
}
int main(){
	int arr[]={1,2,3,8,9,10};
	int n= 6;
	int si=0;

	cout << sorted(arr,si,n);
	return 0;
}€