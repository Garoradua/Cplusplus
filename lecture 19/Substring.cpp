#include<iostream>
using namespace std;

void printsubsequence(string str, string ans){
	//Base Case
	if(str.length()==0){
		cout << ans << endl;
		return;
	}
	char ch = str[0];
	string ros= str.substr(1);

	printsubsequence(ros, ans);
	printsubsequence(ros, ans + ch);
}
int main(){
	printsubsequence("abc","");
	return 0;
}