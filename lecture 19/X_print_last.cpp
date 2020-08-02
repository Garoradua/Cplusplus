#include<iostream>
using namespace std;
string printx(string str){
	if(str==""){
		return "";
	}
	char ch = str[0];
	string ros = str.substr(1);
	string result= printx(ros);

	if(ch == 'x'){
		return result + ch;
	}else{
		return ch + result;
	}
}
int main(){
	cout<<printx("axbxcx");
	return 0;
}