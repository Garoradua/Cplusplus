#include <iostream>
using namespace std;
int main()
{
	cout << "Enter any no"<<endl;
	int i;
	cin >> i;
	int x;
	
	for(x=2;x<i;x++)
	{
		if(i%x==0)
		{
		cout << "Not prime"<<endl;
		break;
		}
	}

	if(i==x)
	{
		cout<<"Prime no"<<endl;
	}
	return 0;
}