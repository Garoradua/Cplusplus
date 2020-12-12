// fiboseries.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	// cout << "Enter no of terms";
	int ft;
	cin >> ft;
	int totalt;
	// cin >> onet >> twot ;
	cin >> totalt;
	int t1=0;
	int t2 = 1;
	int t3;

	for(int i=0; i<=totalt; i++){
		
			t3 = t1+t2;
			t1=t2;
			t2=t3;
			if(i>=ft){
			cout << t3 << "\t";
		}
		}
	


	return 0;
}