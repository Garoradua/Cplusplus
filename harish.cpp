#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	cin >> b;
	int x[a],y[b];
	int z[a+b];
	for(int i=0; i<a; i++){
		cin >> x[i];
		z[i]=x[i];
	}
	for(int i=0; i<b; i++){
		cin >> y[i];
		z[i+a]=y[i];
	}
	for(int i=0; i<(a+b); i++){
		cout << z[i];
	}
	return 0;
}