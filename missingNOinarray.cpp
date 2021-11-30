#include <iostream>
using namespace std;
int main(){
	int arr[] = {5,15,9,7};
	int n= 4;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0; i<n-1; i++){ // 5 7 9 15
		// for(int j=i; j<n-2; j++){
		int temp = arr[i];  // 7
		while(temp+1 < arr[i+1]){ //6 // 7
			temp = temp+1;
			cout << temp << endl; // 6
		}
		}
	
	// for(int i=0; i<n; i++){
	// 	cout << arr[i];
	// }
}