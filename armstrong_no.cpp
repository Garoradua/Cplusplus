#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter Number";
	cin >> n;
	int no;
	int org=no=n;
	int a,result=0,size=0;
	while(n!=0){
		size=size+1;
		n=n/10;
	}
	while(no!=0){
		a=no%10;
		no=no/10;
		result=result+pow(a,size);
	}
	if(org==result){
		cout << "Armstrong number";
	}else{
		cout << "Not Armstrong number";
	}
}