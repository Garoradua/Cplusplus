#include<iostream>
using namespace std;
int main (){
	cout << "Enter any Number";
	int n;
	int sum=0, last=0, temp=0;
	cin >> n;
	temp =n;
	while(n > 0){
	last = n%10;
	sum = (sum*10) + last;
	n = n/10;
}
	if(temp==sum){
		cout << "palindrome no";
	}
	else{
		cout << "Not palindrome";
	}
	return 0;

}