#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the no" << endl;
	int n;
	cin >> n;
	int sum=0;
	int x=1;
	while(x<=n)
	{
		if(x%2==0)
		{
			sum=sum+x;
			
		}
		x=x+1;
	}
	cout << "Sum of even numbers is"<<sum<<endl;
	return 0;

}