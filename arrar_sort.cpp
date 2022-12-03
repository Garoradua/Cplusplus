#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={5,15,526,512,0};
	int len = 5;

	for(int i=0; i<=len/2; i++){
		swap(arr[i],arr[len-1-i]);
	}

	for(int i=0; i<len; i++){
		cout << arr[i];
	}
}