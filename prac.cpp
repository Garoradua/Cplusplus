#include<iostream>
using namespace std;
float cumulativeDiscount(float arr[], int n){
	float markedprice = 100;
	for(int i=0; i<n; i++){
		markedprice = markedprice * (100 - arr[i])/100;
	}
	float final = 100 - (markedprice*100/100);
	return final;
}

int main()
{
	float arr[]={10.0,40.0,10.0};
	float result = cumulativeDiscount(arr,3);
	cout << result;
	return 0;
}	