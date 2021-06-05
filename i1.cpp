#include<iostream>
using namespace std;
int main(){
	int a[]={2,3,4,6,1,5};
	// int len = a.length();
	int temp;
	int j;
	for(int i=1; i<6; i++){
		temp = a[i];
		j=i-1;
		while(a[j]>temp && j>=0){
			a[j+1]=a[j];
			j--;		
		}
	
	a[j+1]= temp;
}
	for(int i=0; i<6; i++){
		cout << a[i];
	}
}