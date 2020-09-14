#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5];
	int small1=INT_MAX;
	int small2=INT_MIN;
	for(int i=0; i<5; i++){
		cin >> arr[i];
	}


	for(int i=0; i<5; i++){
		if(arr[i]>0){
			if(arr[i]<small1){
			small1 = arr[i];
		}
		}


		if(arr[i]<0){
			if(arr[i]>small2){
				small2= arr[i];
		}
		}
}
		int x = -(small2);

		if(small1<x){
			cout << small1;
	}
	else{
		cout << small2;
	}
		

		

		
	
	// Tcout << endl << small << endl;
return 0;

}