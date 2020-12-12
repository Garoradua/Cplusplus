#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k;
	for(int i=1; i<=n; i++){
		k=i;
		for(int j=1; j<=n-i; j++){ 
			cout << " ";
		}
		for(int k=1; k<=i; k++){
			cout << k;
		}
		cout << endl;
	}
	return 0;
}