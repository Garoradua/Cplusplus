#include<iostream>
using namespace std;
int main(){
	int arr[] = {5, 78, 0, 2,1};
	int n=5;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << arr[i];
	}
}