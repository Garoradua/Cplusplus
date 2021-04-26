#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int space = n-1;

	for(int i=1; i<=n; i++){
		for(int j=0; j<space; j++){
			cout << " ";
		}
		


		for(int j=1; j<=i; j++){
			cout << "*";
			cout <<" ";
		}
		cout << endl;
		space--;
	}
	return 0;
}