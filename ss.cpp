#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin >> size;
	int a[size];
	for(int i=0; i<size; i++){
		cin >> a[i];
	}

	for(int i=0; i<size; i++){
		int min = i;
		for(int j=i+1; j<size; j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		if(min !=i){
			swap(a[min],a[i]);
		}
	}
	for(int i=0; i<size; i++){
		cout << a[i];
	}
}