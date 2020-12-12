#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	int n;
	cin >>n;
	int b;
	cin>>b;

	int result = pow(a, b);
	// cout << result;
	int ans = result%1337;
	cout << -ans;

}