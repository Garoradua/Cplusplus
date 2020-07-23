#include <iostream>
using namespace std;
int main()
{
	cout << "****while loop************"<<endl;
	cout << "Enter any no"<<endl;
	int n;
	cin >> n;
	int sum=0;
	int i=0;

	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout << "sum is" << sum << endl;
	
	cout << "****for loop************"<<endl;
	cout << "Enter any no"<<endl;
	int j;
	cin  >> j;
	int sum1 =0;

	for(int i=0;i<=j;i++)
	{
		sum1=sum1+i;

	} 
	cout<<sum1<<endl;
	return 0;

}