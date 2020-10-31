#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	string s;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> s;
		int p = 0; 
    	while (s[p]) {
        	p++; 
        }
    		
		// int length = s.length();
		int x = 0;
		// cout << length;
		for(int j=0; j < p; j++){
			 x =  ((int)s[j] - 64 ) +(26*x);
			a[i] = x;
		}
	}
		for(int i=0; i<n; i++){
			cout << a[i];
		}
    
    return 0;
}