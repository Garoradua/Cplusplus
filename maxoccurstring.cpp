#include<bits/stdc++.h>
using namespace std;

void maxoccur(string str){
	int length  = str.length();
	int count[26] = {0};
	int max = 0;
	char result;
	int i;
	cout << length;
	for( i=0; i<length; i++){
		count[str[i]]++;
	if(count[str[i]] > max){
		max = count[str[i]];
		result = str[i];
	}
}
	cout << result;
}

int main(){
	string str;
	cin >> str;

	maxoccur(str);
}