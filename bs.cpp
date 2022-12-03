#include<iostream>
using namespace std;
int main(){
	int size;
	cin >> size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i]>arr[j])
			swap(arr[i],arr[j]);
		}
	}
	for(int i=0; i<size; i++){
		cout << arr[i];
	}
}

“Banking as a Service (BaaS) allows nonbanks (usually in the form of a brand) to embed financial services into its customer experience by selecting capabilities offered by BaaS providers (bank white-label products) in a modular fashion, usually delivered through an app.”