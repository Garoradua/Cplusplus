#include<iostream>
using namespace std;
int main(){
	string str = "gourav arora";
	int freq[125] = {0};
	int length = str.length();

	for(int i=0; i<length; i++){
		if(str[i]>='a' && str[i] <='z')
		freq[str[i]]++;
	}

	for(int i=0; i<125; i++){
		if(freq[i]!=0 && char(i) != '\t' ){
		cout << "length of " << char(i) << " " << freq[i] << endl;
	}
	}
}