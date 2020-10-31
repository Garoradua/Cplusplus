#include<bits/stdc++.h>
using namespace std;

void maxoccur(string str){
	int length  = str.length();
	int i;
	cout << length;
	for( i=0; i<length; i++){
		int j;
		for(j = 0; j<i; j++){
			if(str[i]==str[j]){
				str[j]='';
				break;
			}

		}
		
	
}
cout << str;
	
}

int main(){
	string str;
	cin >> str;

	maxoccur(str);
}