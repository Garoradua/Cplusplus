#include<iostream>
using namespace std;

void countincreasing(int n){
	if(n==1){
		cout << n << endl;
		return;
	}

	countincreasing(n-1);
	cout << n << endl;
}


int main()
{
	countincreasing(5);
	return 0;
}
