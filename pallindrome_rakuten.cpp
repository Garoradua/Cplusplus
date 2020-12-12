#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,result=0;
	cin >> n;
	while(n!=0){
		b=n%10;
		n=n/10;
		result = result*10+b;
	}
	cout << result;
	return 0;
}