// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
// 	string s1,s2;
// 	getline(cin, s1);
// 	getline(cin, s2);
// 	s1.append(s2);
// 	cout << s1;
// }


#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[] = "Hello my name is";
	string s2;
	// getline(cin, s1);
	getline(cin, s2);
	strcat(s1, s2);
	cout << s1;
}
