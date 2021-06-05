#include<iostream>
using namespace std;
int main(){
	int a[]={5,4,3,6,1};
	bool next;
	for(int i=1; i<5; i++){
		next = true;
		for(int j=0; j<5-i; j++){
			
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				next = false;
			}
			
		}
		if(next==true){
				break;
			}
	}
	for(int i=0 ;i<5; i++){
		cout << a[i];
	}
}