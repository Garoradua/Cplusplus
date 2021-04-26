#include<iostream>
using namespace std;
int main(){
	string S;
	int count=0;
	getline(cin,S);
	// cout << S[2];
	for(int i=0; i<S.length(); i++){
		if(S[i]==' '){
			continue;
		}else{
			count++;
		}
	}
	cout << count;

}