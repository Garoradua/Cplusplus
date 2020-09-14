#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int count = 0;
	int count_max=0;
	int p;

	sort(arr,arr+n);

	int x=arr[0];

	for(int i=0; i<n; i++){
		if(x==arr[i]){
			count ++;
		}

		else{
			if(count>count_max){
				 count_max=count;
				 p= arr[i-1];
				 x = arr[i];
				 count=0;
				 count++;
			}
			else{
				x=arr[i];
				count=0;

				
				count++;
			}

		}
			
		

	}

	if(count_max>=count){
		cout << p;
	}
	else{
		cout << x;
	}

	return 0;
		
}
