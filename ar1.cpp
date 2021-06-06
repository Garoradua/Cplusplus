#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter no of elements in array";
	cin >> n;
	int a[n];
	cout << "Enter array elements";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n/2; i++){
		swap(a[i],a[n-1-i]);
	}
	for(int i=0; i<n; i++){
		cout << a[i];
	}
}