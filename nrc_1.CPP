#include<iostream>
using namespace std;
int main(){
	int incoming,outgoing,rust;
	cin >> incoming >> outgoing >> rust;
	int a[incoming], b[outgoing];
	int a_sum=0, b_sum=0;
	for(int i=0; i<incoming; i++){
		cin >> a[i];
		a_sum+= a[i];
	}
	// cout << a_sum;
	for(int i=0; i<outgoing; i++){
		cin >> b[i];
		b_sum+= b[i];							
	}
	// cout << b_sum;
	if(b_sum>a_sum){
		cout << a_sum - b_sum + rust;
	}
	else{	
		int x = a_sum - b_sum + rust;
		cout << -x;
	}
return 0;

}