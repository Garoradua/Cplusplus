#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string s2;
	s2=s;
	int len = s.length();
	for(int i=0; i<len/2; i++){
		swap(s[i],s[len-1-i]);
	}
	if(s==s2){
		cout << "Pallindrome";
	}else{
		cout <<"NO";
	}
}