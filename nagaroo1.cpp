#include<iostream>
using namespace std;
int main(){
	int arr[]= {-1,-8,-2,-9,11, 9};
	int product1=1, product2=1; max_product=1;
	int max_positive=0, max_2_positive=0;
	int max_negative=0, max_2_negative=0;
	int temp1=0;
	for(int i=0; i<5; i++){
		if(arr[i]>0){
			if(arr[i]>max_2_positive){
				max_2_positive = arr[i]
				if(max_positive<max_2_positive){
					temp1 = max_positive;
					max_positive = max_2;
					max_2_positive = temp1; 
				}
			}
			product1 = max_positive * max_2_positive;
			else{
				if(arr[i]<0){
					if(arr[i]<max_2_negative){
				max_2_negative = arr[i]
				if(max_negative>max_2_negative){
					temp2 = max_positive;
					max_negative = max_2_negative;
					max_2_negative = temp2; 
				}
			}
				}
			}
		}

	}
}