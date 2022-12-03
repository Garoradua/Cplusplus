#include<bits/stdc++.h>
using namespace std;
int main(){
	int no;
	cin >> no;
	int a[no];
	for(int i=0; i<no; i++){
		cin >> a[i];
	}
	for(int i=0; i<no; i++){
		for(int j=i+1; j<no; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0; i<no; i++){
		cout << a[i];
	}

	cout << endl;
	cout << "Min " << a[0] << "Max " << a[no-1];
}