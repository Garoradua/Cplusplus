#include<bits/stdc++.h>
using namespace std;
int main(){
	string S = "Jaipur";
	int len;
	int j=0;
	len = S.length();
	// cout << j;
	char p[len];
	for(int i=0; i<len; i++,len--){
		p[i] = S[i]

		S[len-1] = p[i];
		S[i] = p[i];
			// len--;
	}
	for(int i=0; i<len; i++){
		cout << S[i];
	}
return 0;
}
