#include<iostream>
using namespace std;

int factorial(int n){
	if(n==1){
		return 1;
	}

	int collect = factorial(n-1);
	int ans = n*collect;
	return ans;
}

int main(){
	cout << factorial(5);
	return 0;
}
