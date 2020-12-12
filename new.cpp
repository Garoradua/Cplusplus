#include<iostream>
using namespace std;
int main(){
	int arr[6];
	for(int i=0; i<6; i++){
		cin >> arr[i];
	}
	int even_min=0;
	int odd_min=0;
	int even2=0;
	int odd2=0;
	for(int i=0; i<6; i=i+2){
		if(arr[i]>even_min){
			even2 = even_min;
			even_min = arr[i];
		}
	}
	for(int i=1; i<6; i=i+2){
		
		if(arr[i]>odd_min){
			odd2= odd_min;
			odd_min = arr[i];
		}
	}

		cout << odd2+even2;
	
	return 0;
}