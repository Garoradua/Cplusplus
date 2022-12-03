#include <bits/stdc++.h>
using namespace std;
int main(){
	string s, s1;
	cin >> s;
	cout << endl;
	cin >> s1;
	

	if(s.length()!=s1.length()){
		cout << "Not anagarm" ;
		return 0;
	}else{
		for(int i=0; i<s.length(); i++){
			int flag=0;
			for(int j=0; j<s.length(); j++){
				if(s[i]==s1[j]){
					flag=1;
				}
			}
			if(flag==0){
				cout << "Not anagarm" ;
		return 0;
			}
		}

	}

	cout << " anagarm" ;

}