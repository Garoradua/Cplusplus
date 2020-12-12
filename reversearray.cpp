#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int total=n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<=n/2; i++,n--)
		swap(a[i],a[n-1]);

	for(int i=0; i<total; i++){
		cout << a[i];
	}
	return 0;
}