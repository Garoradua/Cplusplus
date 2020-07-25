#include<iostream>
using namespace std;

int powerof2(int n, int p){
	if(p==0){
		return 1;
	}

	int collect = powerof2(n,p-1);
	int ans = n*collect;
	return ans;
}
int main(){
	cout  << powerof2(2,4);
	return 0;
}