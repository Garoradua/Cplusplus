#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n=100;
int main(){
	cout << "Enter inputs you want to take";
	int p;
	cin >> p;
for(int i=0; i<p;i++){
cin  >> arr[i];
}
sort(arr,arr+n);

for(int i=0; i<=n;i++){

	if((arr[i]) < (arr[i+1])){
		int y,x;
		x =arr[i];
		y = x+1;
		if(y!=arr[i+1]){
		cout << "Missing no is" << x+1;
}
}
}
return 0;
}
			
		
		
