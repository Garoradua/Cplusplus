#include <iostream>
using namespace std;
int main()
{
	int x=1;
	while(x<10)
	{
		cout << "At pos" << x << endl;
		x=x+1;
	}
	cout<<"Reached" << endl;

	for(x=1;x<10;x++)
	{
		cout<<"At pos" << x << endl;

	}
	cout << "Reached";


	return 0;
}