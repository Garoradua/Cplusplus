#include<iostream>
using namespace std;

void counters(int n){
	if(n==0){
		return;
	}
	cout << n << endl;;
	counters(n-1);
	cout <<n << endl;;
	
}
int main(){
	counters(5);
	return 0;
}