#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.length();
	int counta=0, counte=0, counti=0, counto=0, countu=0;

	for(int i=0; i<len; i++){
		if(s[i]=='a'){
			counta++;
		}
		if(s[i]=='e'){
			counte++;
		}
		if(s[i]=='i'){
			counti++;
		}
		if(s[i]=='o'){
			counto++;
		}
		if(s[i]=='u'){
			countu++;
		}
	}

	cout << "vowel a is " << counta << endl;
	cout << "vowel e is " << counte << endl;
	cout << "vowel i is " << counti << endl;
	cout << "vowel o is " << counto << endl;
	cout << "vowel u is " << countu;

	return 0;
}