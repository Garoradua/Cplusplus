#include<iostream>
using namespace std;
int main(){
	string s, s2;
	cin >> s; // abcdef
	cin >> s2; //cde
	int j=0,k; // j=0
	int len = s2.length(); //3    //s=6



	for(int i=0; i<s.length(); i++){ //0<5
		if(s2[j]== s[i]){
			 k=i; // j=1 i=2
			while(j<len-1){ //  <3
				 //k=
			j++;    // 2
			k++;     // 4
			if(s2[j]!= s[k]){ 
				j=0;
				break;
			}

		}
		if(j==len-1){
		cout << "Substring";
		break;
	}
		
	}
}
	// if(i>s.length()){
	// 	cout << "Not";
	
	// }

	return 0;
}

