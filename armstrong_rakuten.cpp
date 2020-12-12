#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, no, size=0,b,result=0,org;
	cin >> n;
	org=no=n;
	while(n!=0){
		size=size+1;
		n=n/10;
	}
	// cout << size;
	while(no!=0){
		b=no%10;
		// cout << b;
		result+=pow(b,size);
		// cout << result;
		no=no/10;
	}
	// cout << result;
	if(result==org){
		cout << "Armstrong number";
	}else{
		cout << "Not Armstrong Number";
	}
	return 0;
}