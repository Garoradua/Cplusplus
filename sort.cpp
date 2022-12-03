#include<iostream>
using namespace std;
int main(){
	// int arr[5];
	// for(int i=0; i<5; i++){
	// 	cin >> arr[i];
	// }
	// for(int i=0; i<5; i++){
	// 	for(int j=i+1; j<5; j++){
	// 		if(arr[i]>arr[j]){
	// 			swap(arr[i],arr[j]);
	// 		}
	// 	}
	// }
	// for(int i=0; i<5; i++){
	// 	cout << arr[i];
	// }

	// for(int i=0; i<=5/2; i++){
	// 	swap(arr[i],arr[5-1-i]);
	// }
	// for(int i=0; i<5; i++){
	// 	cout << arr[i];
	// }

	string str;
	// getline(cin,str);
	cin >> str;
	// cout << str;
	int number = 0;
	int arr[26] ={0};
	for(int i=0; i<str.length(); i++){
		number = str[i]-97;
		arr[number]++;
	}
	cout << endl;
	for(int i=0; i<26; i++){
		if(arr[i]!=0){
			cout << char(i+97) << arr[i] << endl;
		}
	}
	// for(int i=0; i<=5/2; i++){
	// 	swap(str[i],str[5-1-i]);
	// }
	// for(int i=0; i<5; i++){
	// 	cout << str[i];
	}
