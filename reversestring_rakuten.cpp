#include<iostream>
using namespace std;

void reverse(string s, int length, int i, int orglen){
		if(i<=orglen/2){
		swap(s[i],s[length-1]); //dcba
		i++; //i=2
		length--; //=2
		reverse(s,length,i) 
	}
	}

int main(){
	string s; 
	cin >> s; //abcd
	int len = s.length(); //4
	int orglen= len;
	int i=0;

	

	reverse(s,len,i,orglen);




	// for(int i=0; i<=len/2; i++){
	// 	swap(s[i], s[len-1-i]);
	// }
	// cout << s;
	return 0;
}