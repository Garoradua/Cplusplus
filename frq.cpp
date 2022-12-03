#include<iostream>
using namespace std;
int main(){
string str;
cin >> str;
int len = str.length();
int arr[26] = {0};
for(int i=0; i<len; i++){
	arr[str[i]-'a']++;
}

for(int i=0; i<26; i++){
	if(arr[i]!=0){
		cout << char(i+'a') << arr[i] <<endl;
	}
}
}