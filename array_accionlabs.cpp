// nth array - 10 numbers

#include<iostream>
using namespace std;

int main(){
	int n =10; 
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int second_array[n];
	int k=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			second_array[k] = arr[i];
			k++;
		}
			if (i>2)
				flag =0;
			for(int j=2; j<=arr[i]/2; j++){
				if(arr[i]%j != 0 ){
					flag = 1;
				}
					if flag==1{
					second_array[k] = arr[i];
						
}
	}
		}
	}

	// for(int i=0; i<k; i++){
	// 	cout << second_array[i] <<" ";
	// }
// }
