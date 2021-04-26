#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int a[5]= {5,4,3,2,1};
	int temp; int j;
	for(int i=1;i<n;i++){
		j=i-1;
		temp= a[i];
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(int i=0; i<n; i++){
		cout << a[i];
	}
	return 0;
}