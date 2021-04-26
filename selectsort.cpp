#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[5]={5,4,3,2,1};

	for(int i=0; i<n-1; i++){
		int min;
		min=i;

		for(int j=i+1; j<n; j++){
			if(a[min]>a[j]){
				min=j;
			}
		}

		if(min!=i){
			swap(a[min],a[i]);
		}
	}
		for(int i=0; i<n; i++){
		cout << a[i];
	}
}
