#include<iostream>
using namespace std;
int main(){
	// string s;
	// getline(cin,s);
	// int len = s.length();

	// for(int i=0; i<len/2; i++){
	// 	swap(s[i],s[len-1-i]);
	// }
	// cout << s;

	int n,org;
	cin >> n;
	org=n;
	int b,result=0;
	while(n!=0){
		b=n%10;
		n=n/10;
		result = result*10+b;
	}
	if(result==org){
		cout << "armstrong no";
	}else{
		cout << "Not Armstrong no";
	}
	return 0;
}