#include<iostream>
using namespace std;

int lastindex(int si, int a[], int key, int n){
	//Base Case
	if(si==n){
		return -1;
	}

	
	//Recursive Case
	int index = lastindex(si+1,a,key,n);
	if(index==-1){
		if(a[si]==key){
			return si;
		}
		else{
			return -1;
		}
	}else{
		return index;
	}
}

int main(){
	int arr[]= {1,2,3,4,5,3,7,8,3};
	int key= 3;
	int si=0;
	int n=9;

	cout << lastindex(si,arr,key,n);
}