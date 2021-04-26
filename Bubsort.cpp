#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[n] = {5,4,3,2,1};
	for(int j=0; j<n; j++){
	for(int i=0; i<n-1-j; i++){
		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
}

	for(int i=0; i<n; i++){
		cout << a[i];
	}
	return 0;
}