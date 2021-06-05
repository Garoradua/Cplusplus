#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int min;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n-1; i++){
		min = i;

		for(int j=i+1; j<n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		if(min!=i){
			swap(a[min],a[i]);

		}
	}//last
	for(int i=0; i<n; i++){
		cout << a[i];
	}
}