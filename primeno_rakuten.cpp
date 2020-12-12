#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool flag = true;
	cin >> n;
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			flag = false;
			break;
		}
	}
	if(flag==true){
		cout << "Prime no";

	}else{
		cout << "Not Prime no";
	}
	return 0;
}