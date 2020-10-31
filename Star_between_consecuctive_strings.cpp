#include<iostream>
using namespace std;

string star(string str){
	//Base Case
	if(str==""){
		return str;
	}

	//Recursive Case
	char ch = str[0];
	string ros = str.substr(1);
	string result = star(ros);

	string star = "*";

	if(ch == result[0]){
		return ch + star + result;
	}
	return ch + result;
}
int main(){
	cout << star("abbcdde");
	return 0;
}