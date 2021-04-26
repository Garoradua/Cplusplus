#include<bits/stdc++.h>
using namespace std;
int main(){
	cout << "Enter number";
	int n;
	cin >> n;
	int org=n;
	int a,result=0;
	while(n!=0){
		a=n%10;
		n=n/10;
		result=result*10+a;
	}
	if(org==result){
		cout << "Pallidrome number";
	}else{
		cout << "Not Pallindrome number";
	}
}