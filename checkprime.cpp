#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int p=0;
	for(int i=2; i<=n/2; i++ ){
		if(n%i==0){
			p=1;
		}
	}
	if(p==1){
		cout <<"Not prime";
	}else{
		cout << "Prime";
	}
}