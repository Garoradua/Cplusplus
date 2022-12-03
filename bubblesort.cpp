#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n] ;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int j=1; j<n; j++){
	for(int i=0; i<n-j; i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
}
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
return 0;
}