#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100];
	int currentsum, maxsum;
	maxsum=0;

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			currentsum=0;
			for(int k=i; k<=j; k++){
				currentsum=currentsum+a[k];
				
			}
			if(currentsum>maxsum){
				maxsum=currentsum;
			}
			
		}
	}	
	cout << maxsum << endl;
		
	return 0;
}