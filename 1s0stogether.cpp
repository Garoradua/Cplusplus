#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin >>n;
	int A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	int start=0,end=n-1;
	while(end>start){
		if(A[start]==1){
		}else{
			start++;
		}
		if(A[end]==0){
		}else{
			end--;
		}
		swap(A[start],A[end]);
	}

	for(int i=0; i<n; i++){
		cout << A[i];
	}
	return 0;
}