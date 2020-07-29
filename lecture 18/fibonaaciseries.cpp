#include<iostream>
using namespace std;

int fibon(int n){
	if(n==0 || n==1){
		return n;
	}

	int fib1= fibon(n-1);
	int fib2= fibon(n-2);

	int fibon = fib1+fib2;
	return fibon;
}
int main(){
	int n = 6;
	cout << fibon(n);
	return 0;
}