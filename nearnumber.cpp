#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b ;
	cin >> a >> b;

	int x = a%b;
	if(x>=(b/2)){


	int p =b-x;
	cout << (a+p);
}
else{
	cout << (a-x);
}

return 0;

}