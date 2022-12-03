#include<bits/stdc++.h>
using namespace std;
int main(){
	int no;
	cin >> no;
	int a[no];

	for(int i=0; i<no; i++){
		cin >> a[i];
	}
	int flag=1;
	for(int i=0; i<no/2; i++){
		if(a[i]!=a[no-1-i]){
			cout << "Not pallindrome";
			flag=0;
			break;

		}
	}
	if(flag==1){
		cout << " pallindrome";
	}
}