#include<iostream>
using namespace std;
int main(){
	string s;
	cin >>s;
	int len = s.length();
	for(int i=0; i<len/2; i++){
		swap(s[i],s[len-1-i]);
	}
cout << s;
return 0;
}