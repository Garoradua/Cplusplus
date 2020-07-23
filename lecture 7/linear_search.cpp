#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[100]={0};
	cout<< "Total numbers you want to add in array";
	cin >> n;
	cout << "Enter the array ";

	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cout<< "enter no you want to search";
	int key;
	cin >> key;
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==key){
			cout << "index is" << i;
			break;
		}
	}
	if(i==n)
	{
		cout<< "element not found";
	}
	return 0;
}