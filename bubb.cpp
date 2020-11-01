#include<iostream>
using namespace std;
int main(){
	int a[]={4,5,6,7,8};
	int n=5;
	int temp;
	bool flag;
	int x=0;
	for(int i=1; i<n; i++){
		flag = true;
		x++;
		for(int j=0; j<n-i; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag = false;

			}
		}
		if(flag==true){
			break;
		}
	}
	for(int i=0; i<n; i++){
		cout << a[i];
	}
	cout << x;
}