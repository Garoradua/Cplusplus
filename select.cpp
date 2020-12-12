#include<iostream>
using namespace std;
int main(){

cout << "Enter the Size of the array:  " ;
	int n;
	cin >> n;
	int a[n];
	// int temp;
	cout << "Enter the elements of array: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

for(int i=0; i<n-1; i++){
	int min;
	min=i;

	for(int j=i+1; j<n; j++){
		if(a[min]>a[j]){
			min = j;
		}
	}
	if(i!=min){
		swap(a[i],a[min]);
	}
}
	for(int i=0; i<n; i++){
		cout << a[i];
	}
}