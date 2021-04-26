#include<iostream>
using namespace std;
int reverse(int arr[]){
	int end=4;
	int rev[5];
	for(int i=0; i<=end; i++,end--){
		rev[i] = arr[i]; 
	
	}
	return* rev;
}
int main(){
	int queue[5] = {1,2,3,4,5};
	int rev[5];
	rev = reverse(queue);

for(int i=0; i<5; i++){
		cout << rev[i];

	return 0;
}
}