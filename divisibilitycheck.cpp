#include <iostream>
using namespace std;
int main()
{
	
	int x;
	cout << "Enter any number" << endl;
	cin >> x;


	if (x%2==0 && x%3==0)
	{
		cout << "Divisible by both 2 and 3"<<endl;
	}
	else if (x%2==0)
	{
		cout << "Divisible by 2 "<<endl;
	}

	else if (x%3==0)
	{
		cout << "Divisible by 3"<<endl;
	}
	else{
		cout << "Not Divisible"<<endl;
	}
	return 0;
}