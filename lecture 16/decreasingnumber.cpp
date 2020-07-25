#include<iostream>
using namespace std;

void counrdecreasing(int n){

	if(n==1){
		cout << n << endl;
		return;
	}

	cout << n << endl;
	counrdecreasing(n-1);
}

int main()
{
	counrdecreasing(5);
	return 0;
}