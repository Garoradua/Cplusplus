#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t1=0, t2=1, t3;
	for(int i=0; i<n; i++){
		if(i==0){
			cout << t1;
		}
		if(i==1){
			cout << t2;
		}if(i>1){
			t3= t1+t2;
			t1=t2;
			t2= t3;
			
			cout << t3 << " ";
		}
	}
	return 0;
}