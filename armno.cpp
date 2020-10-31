#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int org=n;
	int no=n;
	int number,number1,a=0,result=0;
	while(no!=0){
		a=a+1;
		no=no/10;
	}
	while(n!=0){
		number = n%10;
		result+= pow(number,a);
		n=n/10;
	}
	if(result==org)
		cout << "armstrong no";
	
}