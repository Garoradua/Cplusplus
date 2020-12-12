#include<iostream>
using namespace std;
int main(){
	string s;
	// cin >> s;
	getline(cin,s);
	cout << s << endl;
	int len = s.length();
	cout << len << endl;
	for(int i=0; i<=len/2; i++,len--){
		char temp;
		temp = s[len-1];
		s[len-1] = s[i];
		s[i]= temp;

	}
	cout << s;

	return 0;
}