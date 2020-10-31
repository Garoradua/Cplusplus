#include<iostream>
using namespace std;

void counters(int n){
	if(n==0){
		return;
	}
	if(n%2!=0){
	cout << n << endl;
}
	counters(n-1);
	if(n%2==0){
	cout <<n << endl;
}
	
}
int main(){
	counters(5);
	return 0;
}