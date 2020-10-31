#include<iostream>
using namespace std;

int sumofnumbers(int n){
	if(n==1){
		return 1;
	}
	int sum = n+ sumofnumbers(n-1);
	return sum;
}

int main()
{
	cout << sumofnumbers(5);
	return 0;
}