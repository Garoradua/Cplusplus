#include <iostream>
using namespace std;
int main(){
	int arr[] = {4,3,2,1,9,8,6};
	for(int i=0; i<7; i++){
		for(int j=i+1; j<7; j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0; i<7; i++){
		cout << arr[i];
	}
}