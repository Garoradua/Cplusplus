#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int i=1;
	int a=0,b;
	while(i<=n ){
		 if(i%2==0){
			b=i-1;
			cout << i << b <<endl;
			i+=1;
		}
		else if(i%2!=0 && i!=n){
			a=i+1;
			cout << i << a <<endl;;
			i+=3;
		}
		if(i>=n && n%2!=0){
			cout <<" "<< n;
			i++;
		}
		
		
	}
	return 0;
}