#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool flag= true;
	for(int i=2; i<=n; i++){
		flag = true;
		for(int j=2; j<=i/2; j++){
			if(i%j==0){
				flag = false;
				break;
			}
		}
		if(flag==true){
			cout << i << " ";
		}
	}
	return 0;
}