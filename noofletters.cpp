#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string:"<<" ";
	getline(cin,str);
	int counter=0;
	
	
	for(int i=0;str[i]!='\0';i++){
	if(str[i]==' ')
			counter++;
		
	}
	
	cout<<"No of letters in a string is:"<<counter;
}