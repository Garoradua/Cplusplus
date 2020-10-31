#include<iostream>
using namespace std;
int main(){
	cout << "Enter total number";
	int n;
	cin >> n;
	int t1=0, t2=1,t3;
	for(int i=1; i<=n; i++){
		if(i==1)
			{
				cout<< t1 << " ";
			}
		else if(i==2){
			cout<< t2 << " ";
			}
		else{
			t3 = t1+t2;
			t1=t2;
			t2=t3;
			cout << t3 << " ";
			}
	}
	return 0;
}