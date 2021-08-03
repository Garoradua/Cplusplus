#include<iostream>
using namespace std;
int GCD(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	if(a==b) return a;
	if(b>a) b=b-a;
	else a=a-b;
	return GCD(a,b);

}
int main()
{
	cout << "Enter two Numbers";
	int a,b;
	cin >> a >> b;
	cout << GCD(a,b);
	return 0;
}