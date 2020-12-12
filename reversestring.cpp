#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.length();
	for(int i=0; i<=(len/2); i++,len--){
		swap(s[i],s[len-1]);
	}
	cout << s;
}